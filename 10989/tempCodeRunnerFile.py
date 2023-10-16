a = []

x = int(input())

for i in range(x):
    a.append(int(input()))
    
a.sort(reverse=True)

for i in a:
    print(i)