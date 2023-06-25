a = int(input())

for i in range(a):
    c,b = input().split()
    for x in b:
        print(x*int(c),end='')
    print()