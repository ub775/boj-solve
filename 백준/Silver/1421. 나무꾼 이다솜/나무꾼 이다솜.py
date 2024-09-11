from sys import stdin

n, c, w = tuple(map(int, stdin.readline().split(" ")))
lst = [int(stdin.readline()) for _ in range(n)]
max_price = 0

for i in range(1, max(lst) + 1):
    price = 0
    for j in lst:
        cut, log = divmod(j, i)
        if log != 0:
            expence = cut * c
        else:
            expence = (cut - 1) * c
        temp = (cut * w * i) - expence

        if temp < 0:
            continue
        price += temp

    if max_price < price:
        max_price = price

print(max_price)