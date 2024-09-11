from sys import stdin
from collections import deque

n = int(stdin.readline())
queue = deque()

for i in range(1, n + 1):
    queue.append(i)

while True:
    if len(queue) == 1:
        break
    queue.popleft()
    queue.append(queue.popleft())
print(queue[0])