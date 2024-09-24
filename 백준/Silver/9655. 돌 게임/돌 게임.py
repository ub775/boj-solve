n = int(input())

memo = [0 for _ in range(1000)]
memo[0] = 'SK'
for i in range(1, n):
    if memo[i-1] == 'SK':
        memo[i] = 'CY'
    else:
        memo[i] = 'SK'

print(memo[n-1])