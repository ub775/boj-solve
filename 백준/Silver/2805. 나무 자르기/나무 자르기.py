from sys import stdin

n, m = map(int, stdin.readline().split())
lst = list(map(int, stdin.readline().split()))

low, high = 0, max(lst)
while low <= high:
    h = (low + high) // 2
    s = 0
    for i in lst:
        if i > h:
            s += i - h
    
    if s >= m:
        low = h + 1
    else:
        high = h - 1
print(high)