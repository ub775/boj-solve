n = int(input())

v = 1
for i in range(1, n + 1):
    v *= i

cnt = 0
for i in str(v)[::-1]:
    if i != '0':
        break
    else:
        cnt += 1

print(cnt)