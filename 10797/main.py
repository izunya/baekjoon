res = int(input())
a = list(map(int,input().split()))

count = 0
for i in range(5):
    if a[i] == res:
        count+=1
            
print(count)