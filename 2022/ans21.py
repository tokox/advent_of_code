#!/bin/python3

suma = 0
i = input()
while i != "":
    x, y = i.split()
    print('I:', i, 'X:', x, 'Y:', y, 'S:', suma)
    if y == 'X':
        suma = suma + 1
    if y == 'Y':
        suma = suma + 2
    elif y == 'Z':
        suma = suma + 3
    if x == 'A':
        if y == 'X':
            suma = suma + 3
        if y == 'Y':
            suma = suma + 6
        elif y == 'Z':
            suma = suma + 0
    elif x == 'B':
        if y == 'X':
            suma = suma + 0
        if y == 'Y':
            suma = suma + 3
        elif y == 'Z':
            suma = suma + 6
    elif x == 'C':
        if y == 'X':
            suma = suma + 6
        if y == 'Y':
            suma = suma + 0
        elif y == 'Z':
            suma = suma + 3
    i = input()

print(suma)
