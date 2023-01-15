#!/bin/python3

suma = 0
i = input()
while i != "":
    first = i[:len(i)//2]
    second = i[len(i)//2:]
    d = ""
    for f in first:
        f = ord(f)
        for s in second:
            if s in d:
                continue
            s = ord(s)
            if f == s:
                if ord('A') <= f and f <= ord('Z'):
                    suma = suma + f+27-ord('A')
                    d = d + chr(f)
                elif ord('a') <= f and f <= ord('z'):
                    suma = suma + f+1-ord('a')
                    d = d + chr(f)
    print(i, len(i), d, suma, flush=True)
    i = input()

print(suma)
