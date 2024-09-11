num = int(input())

for i in range(num):
    OX = str(input())

    cnt = 0
    res = 0
    
    for j in OX:
        if j == 'O':
            cnt = cnt + 1
            res = res + cnt
        else:
            cnt = 0
    print(res)
