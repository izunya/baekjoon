m,r,c = 0,0,0;
for i in range(9):
    b = list(map(int,input().split()))
    if max(b) >= m:
        r = i+1;
        c = b.index(max(b))+1
        m = max(b)
print(m)
print(r,c)