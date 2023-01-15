#!/bin/python3

suma = 0
X = input()
while X != "":
    Y = input()
    Z = input()
    c = 0
    for x in X:
        for y in Y:
            for z in Z:
                if x == y and y == z:
                    x = ord(x)
                    if ord('A') <= x and x <= ord('Z'):
                        c = x+27-ord('A')
                    elif ord('a') <= x and x <= ord('z'):
                        c = x+1-ord('a')
                    break
            if c != 0:
                break
        if c != 0:
            break
    suma = suma + c
    X = input()

print(suma)
