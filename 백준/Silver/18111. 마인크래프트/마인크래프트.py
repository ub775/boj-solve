from sys import stdin, maxsize

n, m, b = map(int, stdin.readline().split())
field = [list(map(int, stdin.readline().split())) for _ in range(n)]
res = maxsize
idx = 0

for height in range(257):
    upper, lower = 0, 0

    for i in range(n):
        for j in range(m):
            if field[i][j] >= height:
                upper += field[i][j] - height
            else:
                lower += height - field[i][j]

    if upper + b >= lower:
        if lower + (upper * 2) <= res:
            res = lower + (upper * 2)
            idx = height

print(res, idx)