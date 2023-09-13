a = list(map(int,input().split()))

if a[0] == 1 and a[1] == 2 and a[2] == 3 and a[3] == 4 and a[4] == 5 and a[5] == 6 and a[6] == 7 and a[7] == 8:
    print("ascending")
elif a[0] == 8 and a[1] == 7 and a[2] == 6 and a[3] == 5 and a[4] == 4 and a[5] == 3 and a[6] == 2 and a[7] == 1:
    print("descending")
else:
    print("mixed")