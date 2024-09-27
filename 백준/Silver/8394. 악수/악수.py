n = int(input())
dp = [0 for _ in range(n)]
dp[0] = 1
dp[1] = 2
for i in range(2,n):
    dp[i] = dp[i - 1] % 10 + dp[i - 2] % 10
print(str(dp[n - 1])[-1])