import sys
lst = list(map(int, input().split()))

for i in range(1, 9):
    if i != lst[i - 1]:
        for j in range(8):
            if 8 - j != lst[j]:
                print("mixed")
                sys.exit()
        print("descending")
        sys.exit()
print("ascending")