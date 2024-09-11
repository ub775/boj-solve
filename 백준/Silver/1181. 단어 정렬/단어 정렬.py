from sys import stdin

n = int(stdin.readline())
lst = []
for _ in range(n):
    lst.append(stdin.readline().split()[0])

lst.sort()
lst = set(lst)

lst2 = []
for word in lst:
    lst2.append((len(word), word))
lst2.sort()

for _, word in lst2:
    print(word)