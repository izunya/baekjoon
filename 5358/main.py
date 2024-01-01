try:
    while True:
        a = list(input())
        res = ""
        for i in range(len(a)):
            if a[i] == "i":
                res += "e"
            elif a[i] == "e":
                res += "i"
            elif a[i] == "I":
                res += "E"
            elif a[i] == "E":
                res += "I"
            else: res += a[i]
        print(res)
except:
    exit()