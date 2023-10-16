a = []

x = int(input())

for i in range(x):
    a.append(int(input()))
    
a.sort()

for i in a:
    print(i)