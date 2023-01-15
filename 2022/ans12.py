#!/bin/python3
import sys
maks1 = 0
maks2 = 0
maks3 = 0
while True:
    suma = 0
    while True:
        i = sys.stdin.readline()
        if i == "\n":
            if suma > maks1:
                maks3 = maks2
                maks2 = maks1
                maks1 = suma
            elif suma > maks2:
                maks3 = maks2
                maks2 = suma
            elif suma > maks3:
                maks3 = suma
            break
        elif i == "":
            if suma > maks1:
                maks3 = maks2
                maks2 = maks1
                maks1 = suma
            elif suma > maks2:
                maks3 = maks2
                maks2 = suma
            elif suma > maks3:
                maks3 = suma
            print(maks1+maks2+maks3)
            exit(0)
        else:
            suma += int(i)
