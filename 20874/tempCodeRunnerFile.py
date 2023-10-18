a = input()
a.upper()
t = "YES"

for i in range(len(a)):
    if a[i] in "MOBIS" and len(a) >= 5:
        t = "YES"
    else:
        t = "NO"
        break
print(t)