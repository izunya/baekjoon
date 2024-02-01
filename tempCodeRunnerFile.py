a = int(input())

for i in range(a):
    b = int(input())
    y = i
    if b <= 25:
        y = "World Finals"
    elif b <= 1000:
        y = 3
    elif b <= 4500:
        y = 2
    else:
        y = 1
    print(f"Case #{i+1}: Round {y}")