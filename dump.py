#!/usr/bin/env python3

import asyncio
import mido
import itertools
from threading import Thread
import readchar
import time

# in_port = mido.open_input("Digital Keyboard:Digital Keyboard MIDI 1 24:0")
# out_port = mido.open_output("Digital Keyboard:Digital Keyboard MIDI 1 24:0")
# in_port = mido.open_input("Digital Keyboard:Digital Keyboard MIDI 1 20:0")
# out_port = mido.open_output("Digital Keyboard:Digital Keyboard MIDI 1 20:0")

# Объект MIDI-порта, работающего на вход
in_port = mido.open_input("Digital Keyboard MIDI 1")

# Объект MIDI-порта, работающего на выход
out_port = mido.open_output("Digital Keyboard MIDI 1")

# Первые 16Mb 
addr_from="00000000" # HEX-адрес без префикса 0x
addr_to  ="00FFFFFF"

enable_input=False

# Функция получения байтов из MIDI порта,
# Работает асинхронно по факту получения новых данных
def got_message(message):

    global enable_input

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
        
    # Вывод символа на экран    
    print(s, end="", flush=True)
    
    # Если пришел символ приглашения ввода
    # (При снятии дампа нигде больше символ '>' встречаться не должен,
    # он появляется только как символ ввода)
    if('>' in s):
        enable_input = True


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


# Функция опроса ввода с клавиатуры
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

    global enable_input
    
    # t = Thread(target=poll_input) # Создается тред, в котором будет крутиться функция опроса клавиатуры
    # t.run()
    # t.join()
    
    send_str("login\n")
    time.sleep(1)
    
    send_str("#0000\n")
    time.sleep(1)
    
    dec_addr_from=int("0x"+addr_from, 16)
    dec_addr_to  =int("0x"+addr_to, 16)
    addr_range = dec_addr_to - dec_addr_from

    # Количество команд "d"
    dump_size = int( addr_range / 256 ) + 1

    for dump_count in range (0, dump_size):
        
        command = ''
        if dump_count == 0:
            command = 'd'
        else:
            command = 'dp'

        # Цикл ожидания когда ввод будет разрешен
        while enable_input == False:
            # Пока идет вывод, программа находится в этом цикле
            # То есть, большую часть времени программа находится в этом цикле
            
            key = readchar.readchar() # Опрос клавиатуры чтобы можно было прервать программу
        
        # Отправка очередной команды
        send_str(command+"\n")


# Установка функции приема символов от Yamaha на порт входа
in_port.callback = got_message

# Запуск программы
asyncio.run(main())
