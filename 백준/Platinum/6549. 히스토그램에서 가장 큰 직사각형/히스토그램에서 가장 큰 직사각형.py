from sys import stdin
from collections import deque

while True:
    hist = list(map(int, stdin.readline().split()))
    n = hist.pop(0)

    if n == 0:
        break

    stack = deque()
    answer = 0

    for i in range(n):
        while len(stack) != 0 and hist[stack[-1]] > hist[i]:
            temp = stack.pop()

            if len(stack) == 0:
                width = i
            else:
                width = i - stack[-1] - 1
            answer = max(answer, width * hist[temp])
        stack.append(i)
    
    while len(stack) != 0:
        temp = stack.pop()
        
        if len(stack) == 0:
            width = n
        else:
            width = n - stack[-1] - 1
        answer = max(answer, width * hist[temp])
    
    print(answer)