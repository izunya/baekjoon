a = []
for i in range(7):
    r = int(input())
    if r % 2 != 0:
        a.append(r)
a.sort(reverse=True)
if len(a) < 1:
    print(-1)
else:
    print(sum(a))
    print(min(a))