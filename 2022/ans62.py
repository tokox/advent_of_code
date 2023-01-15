#!/bin/python3

stream = input()
for i in range(len(stream)-3):
    repeated = False
    for j in range(i, i+14):
        for k in range(i, i+14):
            if j != k and stream[j] == stream[k]:
                repeated = True
                break
        if repeated:
            break
    if not repeated:
        print(i+14)
        break
