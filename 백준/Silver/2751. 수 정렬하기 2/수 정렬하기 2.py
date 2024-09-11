from sys import stdin

n = int(stdin.readline())
lst = []
for _ in range(n):
    lst.append(int(stdin.readline()))

for i in sorted(lst):
    print(i)