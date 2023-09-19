a = list(map(int,input().split()))

if (a[0]*a[1]) / a[2] > (a[0]/a[1]) * a[2]:
    print(int((a[0]*a[1]) / a[2]))
else:
    print(int((a[0]/a[1]) * a[2]))