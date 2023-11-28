a = int(input()) # 잠든 시간 
b = int(input()) # 일어나야 하는 시간

if a > b:
    b += 24

print(b - a)