from sys import stdin
from collections import deque

k = int(stdin.readline())
stack = deque()

for i in range(k):
    n = int(stdin.readline())
    if len(stack) != 0 and n == 0:
        stack.pop()
    else:
        stack.append(n)

print(sum(stack))