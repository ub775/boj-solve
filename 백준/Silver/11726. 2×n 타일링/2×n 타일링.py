memo = [0 for _ in range(1000)]
memo[0] = 1
memo[1] = 2
for i in range(2, 1000):
    memo[i] = memo[i - 1] + memo[i - 2]

n = int(input())
print(memo[n - 1] % 10007)