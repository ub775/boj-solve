import sys

def chk_bingo(lst):
    cnt = 0
    for i in range(5):
        if sum(lst[i]) == 5:
            cnt += 1

    for i in range(5):
        temp = 0
        for j in range(5):
            temp += lst[j][i]
        if temp == 5:
            cnt += 1

    temp = 0
    for i in range(5):
        temp += lst[i][i]
    if temp == 5:
        cnt += 1

    temp = 0
    for i in range(5):
        temp += lst[i][4 - i]
    if temp == 5:
        cnt += 1

    return cnt

arr1 = []
arr2 = []
chk = [[0] * 5 for i in range(5)]

for i in range(5):
    arr1.append(list(input().split()))

for i in range(5):
    arr2.append(list(input().split()))

res = 0
for i in range(5):
    for j in range(5):
        res += 1
        call = arr2[i][j]
        for k in range(5):
            for l in range(5):
                if arr1[k][l] == call:
                    chk[k][l] = 1
        if chk_bingo(chk) >= 3:
            print(res)
            sys.exit()