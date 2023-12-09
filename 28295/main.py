r = "N"
for i in range(10):
    a = int(input())
    if a == 1:
        if r == "N":
            r = "E"
        elif r == "E":
            r = "S"
        elif r == "S":
            r = "W"
        elif r == "W":
            r = "N"
    elif a == 2:
        if r == "N":
            r = "S"
        elif r == "E":
            r = "W"
        elif r == "W":
            r = "E"
        elif r == "S":
            r = "N"
    elif a == 3:
        if r == "N":
            r = "W"
        elif r == "E":
            r = "N"
        elif r == "W":
            r = "S"
        elif r == "S":
            r = "E"
print(r)