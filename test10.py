a, res = list(map(int, input().split())), ""
if len(a)==2 and a[1]==0:
    print("0 0")
else:
    for i in range(0, len(a), 2):
        if a[i + 1] != 0:
            res += str(a[i] * a[i + 1]) + " " + str(a[i + 1] - 1) + " "
    print(res.strip())