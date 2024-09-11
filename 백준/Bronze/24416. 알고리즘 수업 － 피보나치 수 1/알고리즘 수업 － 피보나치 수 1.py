n = int(input())

a_cnt = 1
def fibo(n):
    global a_cnt
    if n == 1 or n == 2:
        return 1
    a_cnt += 1
    return fibo(n - 1) + fibo(n - 2)

fibo(n)

b_cnt = 0
def dyfibo(n):
    global b_cnt
    lst = [0 for i in range(n)]
    lst[0], lst[1] = (1, 1)
    for i in range(2, n):
        b_cnt += 1
        lst[i] = lst[i - 1] + lst[i - 2]
    return lst[n - 1]

dyfibo(n)
print(a_cnt, b_cnt)