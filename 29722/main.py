y,m,d = map(int,input().split('-'))
t = int(input())

d+= t

if d>30:
    for i in range(int(d/30)):
        m +=1
    d = d%30

if m>12:
    for i in range(int(m/12)):
        y +=1
    m = m%12

if m < 10:
    m = "0"+str(m)

if d < 10:
    d = "0"+str(d)

print("%s-%-s-%s" %(y,m,d))