n = int(input())

memo = [0 for _ in range(10)]
memo[0] = 0
memo[1] = 1

for i in range(2, n):
    div = i // 2
    memo[i] = div * (i - div) + memo[div] + memo[i - div]

print(memo[n - 1])