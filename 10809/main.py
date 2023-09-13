a = str(input())
res = 'abcdefghijklmnopqrstuvwxyz'
for i in res:
    if i in a:
        print(a.index(i),end=' ')
    else:
        print(-1,end=' ')

