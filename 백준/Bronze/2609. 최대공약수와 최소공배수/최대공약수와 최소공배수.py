n, m = tuple(map(int, input().split()))

for i in range(min(n, m), 0, -1):
    if n % i == 0 and m % i == 0:
        lcm = i
        break

gcd = int(n / lcm) * int(m / lcm) * lcm

print(lcm)
print(gcd)