n = int(input())

for i in range(n):
    print(" "*i+"*"*(n-i)+"*"*(n-i-1))
for i in range(2,n+1):
    print(" "*(n-i)+"*"*(i)+"*"*(i-1))