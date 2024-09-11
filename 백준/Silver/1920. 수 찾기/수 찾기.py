from sys import stdin

n = int(stdin.readline())
st = set(stdin.readline().split())

m = int(stdin.readline())
lst = list(stdin.readline().split())

for i in lst:
    if i in st:
        print(1)
    else:
        print(0)