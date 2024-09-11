lst = []
for _ in range(10):
    lst.append(int(input()))

res = []
for i in lst:
    if i % 42 not in res:
        res.append(i % 42)

print(len(res))