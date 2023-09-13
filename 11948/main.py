a = []
b = []
for i in range(6):
    if i < 4:
        a.append(int(input()))
    else:
        b.append(int(input()))

a.sort()
b.sort()

print(a[3]+a[2]+a[1]+b[1])