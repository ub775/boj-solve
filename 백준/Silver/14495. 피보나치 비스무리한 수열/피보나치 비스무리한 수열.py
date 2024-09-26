memo = [0 for _ in range(116)]
memo[0] = 1
memo[1] = 1
memo[2] = 1
for i in range(3, 116):
    memo[i] = memo[i - 1] + memo[i - 3]

n = int(input())
print(memo[n - 1])