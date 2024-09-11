from sys import stdin

n = int(stdin.readline())
lst = []
for _ in range(n):
    cmd = stdin.readline().split()
    if "push_front" in cmd:
        lst.insert(0, int(cmd[1]))
    if "push_back" in cmd:
        lst.append(int(cmd[1]))
    if "pop_front" in cmd:
        if len(lst) == 0:
            print(-1)
        else:
            print(lst[0])
            lst.remove(lst[0])
    if "pop_back" in cmd:
        if len(lst) == 0:
            print(-1)
        else:
            print(lst[-1])
            lst.pop()
    if "size" in cmd:
        print(len(lst))
    if "empty" in cmd:
        if len(lst) == 0:
            print(1)
        else:
            print(0)
    if "front" in cmd:
        if len(lst) == 0:
            print(-1)
        else:
            print(lst[0])
    if "back" in cmd:
        if len(lst) == 0:
            print(-1)
        else:
            print(lst[-1])
