a = int(input())

for i in range(a):
    b = int(input())
    y = ""
    if b <= 25:
        y = "World Finals"
    elif b <= 1000:
        y = "Round 3"
    elif b <= 4500:
        y = "Round 2"
    else:
        y = "Round 1"
    print(f"Case #{i+1}: {y}")