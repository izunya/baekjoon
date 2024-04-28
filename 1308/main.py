from datetime import date

td = list(map(int,input().split()))
dd = list(map(int,input().split()))

if td[0] + 1000 < dd[0]:
    print("gg")
elif td[0] - dd[0] == 1000 and (td[1],td[2]) <= (dd[1],dd[2]):
    print("gg")
else:
    td = date(*td)
    dd = date(*dd)

    print("D-"+str(dd.toordinal() - td.toordinal()))