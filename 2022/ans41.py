#!/bin/python3

ile = 0
i = input()
while i != "":
    xy1, xy2 = i.split(',')
    x1, y1 = xy1.split('-')
    x2, y2 = xy2.split('-')
    x1 = int(x1)
    y1 = int(y1)
    x2 = int(x2)
    y2 = int(y2)
    if x1 <= x2 and y2 <= y1:
        ile = ile + 1
    elif x2 <= x1 and y1 <= y2:
        ile = ile + 1
    i = input()
print(ile)
