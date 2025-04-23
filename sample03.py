#!/usr/bin/env python3

import asyncio
import mido
import itertools
from threading import Thread
import readchar
import time

accum_string=''

# Сохранение полученных данных в файл
def save_data(s):

    global accum_string

    accum_string += s

    if not "\n" in accum_string:
        return

    save_string_count = accum_string.count("\n")
    
    save_string_list = accum_string.split("\n")
    
    for i in range(0, save_string_count):
    
        line = save_string_line[i]
        
        if len(line)>=57:

            # Оставляются только символы адреса и HEX-кодов
            line = line[0:58]

            with open("dump.txt", "a", encoding="utf-8") as file:
                file.write(line+"\n")

    if accum_string[-1]!="\n":
        accum_string = save_string_list[-1]
    else:
        accum_string = ''


def main():
    
    save_data(">")
    save_data("00001000  FF")
    save_data(" 10 20 30 40 50 60 70 80")
    save_data(" 10 20 30 40 50 60 70 \n ")


# Запуск программы
if __name__ == '__main__':
    main()
