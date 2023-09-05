walk,bus,sub = map(int, input().split())

if bus < sub:
    print("Bus")
elif bus > sub:
    print("Subway")
else:
    print("Anything")