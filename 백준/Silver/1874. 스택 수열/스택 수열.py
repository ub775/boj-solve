from sys import stdin
from collections import deque

n = int(stdin.readline())

stack = deque()
lst = []
item = 1
no = False

for i in range(n):
    t = int(stdin.readline())

    while item <= t:
        stack.append(item)
        lst.append("+")
        item += 1
    
    if t == stack[-1]:
        stack.pop()
        lst.append("-")
    else:
        no = True

if no:
    print("NO")
else:
    print(*lst, sep="\n")