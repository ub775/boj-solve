from sys import stdin

n = int(stdin.readline())
lst = []
for _ in range(n):
    (x, y) = tuple(map(int, stdin.readline().split()))
    lst.append((y, x))

for y, x in sorted(lst):
    print(x, y)