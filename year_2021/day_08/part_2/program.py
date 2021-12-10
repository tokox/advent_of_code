#!/bin/python3
import sys
data = sys.stdin.readlines()
for i in range(0, len(data)):
    print(i)
    data[i] = str(data[i][:-1]).split(' | ')
    data[i][0] = data[i][0].split(' ')
    data[i][1] = data[i][1].split(' ')
    for j in range(0, len(data[i][0])):
        data[i][0][j] = list(data[i][0][j])
        data[i][0][j].sort()
    for j in range(0, len(data[i][1])):
        data[i][1][j] = list(data[i][1][j])
        data[i][1][j].sort()
print(data)
licznik = 0
for i in range(0, len(data)):
    for j in range(0, len(data[i][1])):
        if len(data[i][1][j]) in [2, 3, 4, 7]:
            licznik+=1
print(licznik)
