a = int(input())
res = 0

for i in range(a):
    y,x = map(int,input().split())
    if y == 136:
        res += 1000
    elif y == 142:
        res += 5000
    elif y == 148:
        res += 10000
    elif y == 154:
        res += 50000
print(res)
