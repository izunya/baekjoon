for i in range(int(input())):
    a = list(map(float, input().split()))
    print("${:.2f}".format(a[0]*a[1]*a[2]))