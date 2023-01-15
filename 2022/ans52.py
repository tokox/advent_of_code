#!/bin/python3

n = int(input())
lists = [[] for _ in range(n)]
for i in range(n):
    m = int(input())
    spl = input().split()
    lists[i].extend(spl)

i = input()
while i != "":
    _, a, _, f, _, t = i.split()
    a = int(a)
    f = int(f)
    t = int(t)
    lists[t-1].extend(lists[f-1][-a:])
    lists[f-1] = lists[f-1][:-a]
    i = input()

for i in range(n):
    print(lists[i][-1], end="")
print()
