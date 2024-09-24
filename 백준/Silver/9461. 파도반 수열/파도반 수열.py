memo = [0 for _ in range(100)]
memo[0] = 1
memo[1] = 1
memo[2] = 1
for i in range(3, 100):
    memo[i] = memo[i - 3] + memo[i - 2]

t = int(input())

for _ in range(t):
    n = int(input())
    print(memo[n - 1])