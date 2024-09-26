memo = [0 for _ in range(1000)]
memo[0] = 1
memo[1] = 3
for i in range(2, 1000):
    memo[i] = 2 * memo[i - 2] + memo[i - 1]

n = int(input())
print(memo[n - 1] % 10007)