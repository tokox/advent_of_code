#!/bin/python3
import sys
maks = 0
while True:
    suma = 0
    while True:
        i = sys.stdin.readline()
        if i == "\n":
            if suma > maks:
                maks = suma
            break
        elif i == "":
            if suma > maks:
                maks = suma
            print(maks)
            exit(0)
        else:
            suma += int(i)
