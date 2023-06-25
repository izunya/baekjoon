n = int(input())
a = list(map(int, input()))

m = str(a[0]) + str(a[1]) + str(a[2])

print(n * a[2])
print(n * a[1])
print(n * a[0])
print(n * int(m))