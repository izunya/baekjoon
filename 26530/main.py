for _ in range(int(input())):
    m = 0.00
    for i in range(int(input())):
        a = map(str,input().split())
        m += int(a[1])*float(a[2])
    print(m)
        