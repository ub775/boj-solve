from sys import stdin

def binary_search(arr, target, start, end):
    while start <= end:
        mid = (start + end) // 2
        if arr[mid] == target:
            return True
        elif arr[mid] > target:
            end = mid - 1
        else:
            start = mid + 1
    return False

n = int(input())
card = list(map(int, stdin.readline().split()))
m = int(input())
check = list(map(int, stdin.readline().split()))

card.sort()
for i in range(m):
    if binary_search(card, check[i], 0, n - 1):
        print(1, end=' ')
    else:
        print(0, end=' ')
