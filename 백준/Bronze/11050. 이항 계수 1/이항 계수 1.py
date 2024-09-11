n, k = tuple(map(int, input().split()))

a = 1
for i in range(1, n - k + 1):
    a *= i
for i in range(1, k + 1):
    a *= i

b = 1
for i in range(1, n + 1):
    b *= i

print(int(b/a))