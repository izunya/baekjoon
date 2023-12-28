n,d = map(int,input().split())
a = []
for i in range(n):
    a.append(int(input()))
d//= sum(a)
for i in range(n):
    print(d * a[i])