a = input()
a= a.upper()
t = "YES"
for i in "MOBIS":
    if i not in a:
        t = "NO"
        break
print(t)