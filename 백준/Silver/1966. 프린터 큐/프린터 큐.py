from sys import stdin
from collections import deque

t = int(stdin.readline())

for i in range(t):
    n, m = map(int, stdin.readline().split())
    queue = deque(stdin.readline().split())
    cnt = 0
    while m != -1:
        if queue[0] == max(queue):
            queue.popleft()
            m -= 1
            cnt += 1
        else:
            queue.append(queue[0])
            queue.popleft()
            if m == 0:
                m = len(queue) - 1
            else:
                m -= 1
    print(cnt)