from sys import stdin

t = int(stdin.readline())

lst = []
for _ in range(t):
    lst.append(tuple(input().split(" ")))

for n, s in lst:
    for c in s:
        print(c * int(n), end="")
    print()