#!/usr/bin/env python3

import asyncio

enable_input = True

async def main():
    print(enable_input)  # Чтение без global — работает

asyncio.run(main())
