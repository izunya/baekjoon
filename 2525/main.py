a,b = map(int,input().split())
b += int(input())
print((a+(b//60))%24 ,b%60)