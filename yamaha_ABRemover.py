#!/usr/bin/env python3

import asyncio
import mido
import itertools
from threading import Thread
import readchar
import time
import re

# in_port = mido.open_input("Digital Keyboard:Digital Keyboard MIDI 1 24:0")
# out_port = mido.open_output("Digital Keyboard:Digital Keyboard MIDI 1 24:0")
# in_port = mido.open_input("Digital Keyboard:Digital Keyboard MIDI 1 20:0")
# out_port = mido.open_output("Digital Keyboard:Digital Keyboard MIDI 1 20:0")

# Объект MIDI-порта, работающего на вход
in_port = mido.open_input("Digital Keyboard MIDI 1")

# Объект MIDI-порта, работающего на выход
out_port = mido.open_output("Digital Keyboard MIDI 1")

enable_input=False
prev_message_symbols=''
accum_string=''

last_need_display="none" # Допустимые варианты: "none", "voice", "style"
do_push_voice=False
do_push_style=False

is_login_completed=False

# Обработка результата выполнения одной команды
def parse_command_result(s):

    global last_need_display
    global do_push_voice
    global do_push_style

    string_count = s.count("\n")
    string_list = s.split("\n")
    
    if string_count==0:
        return
    
    # В первой строке находится сама команда
    command = string_list[0];
    
    if command == "dispinfo":

        print("\nОбнаружен ответ на команду dispinfo", end="\n", flush=True)
        
        # Поиск строки вида "002 (Jobcon ID:004)%"
        pattern = r'^\s*(\d+)\s+\(Jobcon ID:(\d+)\)%$'
        matches = re.findall(pattern, s, re.MULTILINE) # Результат: [('002', '004')] или [('003', '005') или [('052', '059')]
        
        if len(matches) == 0:
            return

        
        disp_id, disp_jobcon = matches[0]
        
        print("disp_id:", disp_id, " disp_jobcon:", disp_jobcon, end="\n", flush=True)
        
        if disp_id=="002" and disp_jobcon=="004": # Обнаружено что отображается режим Voice
            last_need_display = "voice"
            print("Запомнен целевой экран Voice", end="\n", flush=True)
            return

        if disp_id=="003" and disp_jobcon=="005": # Обнаружено что отображается режим Style
            last_need_display = "style"
            print("Запомнен целевой экран Style", end="\n", flush=True)
            return

        
        if disp_id=="052" and disp_jobcon=="059": # Обнаружено что отображается режим Main A или Main B

            print("Обнаружен режим экрана Main A/Main B", end="\n", flush=True)

            if last_need_display == "voice":
                do_push_voice=True
                print("Должна нажаться кнопка Voice", end="\n", flush=True)
                return

            if last_need_display == "style":
                do_push_style=True
                print("Должна нажаться кнопка Style", end="\n", flush=True)
                return


# Обработка данных, полученных от Yamaha в консоли
def parse_console_data(s):

    global enable_input
    global prev_message_symbols
    global accum_string

    # Новые данные добавляются в многострочную строку
    accum_string += s

    # Если предыдущая выводимая строка заканчивалась на перевод строки
    is_prev_br = False
    if prev_message_symbols!='' and prev_message_symbols[-1] == '\n':
        is_prev_br = True

    prev_message_symbols = s

    # Если пришел символ приглашения ввода
    if( ('\n>' in s) or (is_prev_br and len(s)>=1 and s[0]=='>') ):
        
        # Значит ответ на команду полностью получен
        # В первой строке будет находиться сама команда, так как она
        # повторялась ("визуализировалась") самой консолью при отправке команды
        print("Ответ команды: ", end="", flush=True)
        print(accum_string, end="", flush=True)
        
        parse_command_result(accum_string)
        
        accum_string = ''
        enable_input = True


# Функция получения байтов из MIDI порта,
# Работает асинхронно по факту получения новых данных
def got_message(message):

    global is_login_completed
    global enable_input
    global prev_message_symbols

    if message.dict()["type"] != "sysex":
        return

    data = message.dict()["data"]
    if len(data) < 9:
        return

    payload = data[7:]
    # print(payload)

    s = ""
    for hi, lo in zip(payload[0::2], payload[1::2]):
        c = chr((hi << 4) | lo)
        if c == '\r':
            c = '\n'
        s += c

    # Вывод символов на экран    
    # print('[', s, ']', end="", flush=True)
    # print(s, end="", flush=True)

    # for sym in s:
    #     print(hex(ord(sym)), end="", flush=True)
    # print(" ", flush=True)

    # Обработка вывода разрешается только после того как произошел вход в консоль
    if is_login_completed:
        parse_console_data(s)


# Установка функции приема символов от Yamaha на порт входа
in_port.callback = got_message


# Функция отправки строки в MIDI-порт
def send_str(s):

    global enable_input
    
    if not enable_input:
        return
    
    # Пока отправляются и принимаются данные, никакой ввод не разрешен
    # до появления нового приглашения ввода
    enable_input = False
    
    # Полезная нагрузка
    payload = [[(ord(c) >> 4) & 0xf, ord(c) & 0xf] for c in s]
    payload = list(itertools.chain(*payload))
    
    # Отправка MIDI-команды с полезной нагрузкой
    out_port.send(mido.Message("sysex", data=[0x43, 0x73, 0x01, 0x52, 0x19, 0x00, 0x00] + payload))


def send_command(command):

    global enable_input

    # Цикл ожидания когда ввод будет разрешен
    while enable_input == False:
        pass
    
    print("Отправка команды: ", command, "\n", flush=True)
    
    # Отправка очередной команды
    send_str(command+chr(13))


def main_cycle():

    global is_login_completed    
    global enable_input
    global do_push_voice
    global do_push_style
    
    # Ввод логина и пароля - это не команды, их нельзя делать через send_command()
    
    print("\n", "Отправка login", "\n", flush=True)
    enable_input = True
    send_str("login"+chr(13))
    time.sleep(1)
    
    print("\n", "Отправка пароля", "\n", flush=True)
    enable_input = True
    send_str("#0000"+chr(13))
    time.sleep(1)
    
    is_login_completed = True
    enable_input = True

    while True:
        send_command('dispinfo')
        
        if do_push_voice:
            do_push_voice = False
            send_command('pushsw 12')
            send_command('sendsw')

        if do_push_style:
            do_push_style = False
            send_command('pushsw 13')
            send_command('sendsw')


'''
def poll_input():
    while True:
        
        key = readchar.readchar()
        
        if key:
            
            # Исправление \n на \r (видимо, такой тип перевода строки понимает Yamaha)
            if key == '\n':
                key = '\r'

            # Блокирование отправки кода символа 0x03, не совсем понятно зачем
            elif key == chr(3):
                return
            
            # Отправка символа в MIDI-порт
            send_str(key)
'''            

async def main():
    
    t = Thread(target=main_cycle) # Создается тред, в котором будет крутиться основная функция
    t.run()
    t.join()
    

# Запуск программы
asyncio.run(main())
