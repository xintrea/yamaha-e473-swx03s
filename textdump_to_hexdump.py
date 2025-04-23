#!/usr/bin/env python3

import re
import sys


# Преобразование многострочного текстового дампа в бинарный
def hexdump_to_binary(input_text, output_file):

    # Регулярное выражение для поиска последовательностей HEX-байтов
    hex_byte_pattern = re.compile(r'([0-9A-Fa-f]{2}\s+)')
    
    binary_data = bytearray()
    
    for line in input_text.split('\n'):
        line = line.strip()
        if not line:
            continue
        
        # Удаляется адресная часть (первые 10 символов, включая пробелы)
        hex_part = line[10:].strip() if len(line) > 10 else ''
        
        # Ищутся все HEX-байты в строке, и строка преобразуется в список строк,
        # где каждая строка - это символьное представление байта (из двух HEX-символов)
        hex_bytes = re.findall(r'[0-9A-Fa-f]{2}', hex_part)
        
        # Конвертируется каждый HEX-байт в числовое значение и добавляется в итоговые данные
        for byte in hex_bytes:
            binary_data.append(int(byte, 16))
    
    # Бинарные данные записываются в файл одним большим куском
    with open(output_file, 'wb') as f:
        f.write(binary_data)
    
    return len(binary_data)


# ------------
# Основной код
# ------------

if len(sys.argv) < 3:
    print("Укажите имя исходного и результирующего файлов в аргументах командной строки.")
    print("Пример: textdump_to_hexdump.py dump_input.txt dump_result.bin")
    sys.exit(1)

input_filename = sys.argv[1]
result_filename = sys.argv[2]

# Исходный текст дампа одним большим куском
with open(input_filename, 'r') as f:
    input_hexdump = f.read()

bytes_written = hexdump_to_binary(input_hexdump, result_filename)

print(f"Бинарный файл '{result_filename}' успешно создан, записано {bytes_written} байт.")
