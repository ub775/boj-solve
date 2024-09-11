n = int(input())
for _ in range(n):
    k = int(input())
    n = int(input())
    cnt = [i for i in range(1, n + 1)]
    for i in range(k):
        tmp = []
        for j in range(n):
            tmp.append(sum(cnt[:j + 1]))
        cnt = tmp
    print(cnt[-1])