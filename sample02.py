#!/usr/bin/env python3

import asyncio
import mido
import itertools
from threading import Thread
import readchar
import time

def main():

    print('Before print s', end="", flush=True)

    s = 'Hello python\n'

    # Вывод символов на экран    
    # print('[', s, ']', end="", flush=True)
    print(s, end="", flush=True)

    for sym in s:
        print(hex(ord(sym)), end="", flush=True)
    print(" ", flush=True)


if __name__ == '__main__':
    main()
