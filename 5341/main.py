while True:
    f = 0
    a = int(input())
    if a == 0:
        break;
    for i in range(1,a+1):
        f += i
    print(f)