n = int(input())
size = list(map(int, input().split()))
t, p = map(int, input().split())

val1 = 0
for m in size:
    if (m % t == 0):
        val1 += m // t
    else:
        val1 += (m // t) + 1
print(val1)
print(n // p, n % p)