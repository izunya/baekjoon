a=["CU",":-)",":-(",";-)",":-P","(~.~)","TA","CCC","CUZ","TY","YW","TTYL"]
b=["see you", "I’m happy", "I’m unhappy", "wink","stick out my tongue", 
"sleepy", "totally awesome","Canadian Computing Competition", "because", "thank-you",
"you’re welcome", "talk to you later"]

while True:
    s = input()
    for i in range(12):
        if s == a[i]:
            print(b[i])
    if s not in a:
        print(s)
    if s == "TTYL": break;