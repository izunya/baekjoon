import sys;
l = {}
input = sys.stdin.readline
r = int(input())
for i in range(r):
    a,b = map(str,input().split())
    if b == "enter":
        l[a] = True
    elif b == "leave":
        del l[a]
for i in sorted(l,reverse=True):
    print(i)