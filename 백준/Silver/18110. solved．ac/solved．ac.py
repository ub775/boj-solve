from sys import stdin

def getRound(num):
    if num - int(num) >= 0.5:
        return int(num) + 1
    else:
        return int(num)

t = int(stdin.readline().strip())
score = []
for _ in range(t):
    score.append(int(stdin.readline().strip()))


if t == 0:
    print(0)
else:
    score.sort()
    h = getRound(t * 0.15)
    res = 0
    for i in range(h, t - h):
        res += score[i]
    res = res / (t - 2 * h)
    
    print(getRound(res))