#!/bin/python3

stream = input()
for i in range(len(stream)-3):
    if stream[i] not in [stream[i+1], stream[i+2], stream[i+3]] and stream[i+1] not in [stream[i+2], stream[i+3]] and stream[i+2] not in [stream[i+3]]:
        print(i+4)
        break
