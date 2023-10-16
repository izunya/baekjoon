a = int(input())
b = []

for i in range(a):
    st = str(input())
    if st not in b:
        b.append(st)
    
b.sort(key=lambda x: (len(x), x))

print(*b, sep='\n')