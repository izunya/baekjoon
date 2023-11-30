Max = list(map(int,input().split()))
Mel = list(map(int,input().split()))

Max[0] *= 3;
Max[1] *= 20;
Max[2] *= 120;

Mel[0] *= 3;
Mel[1] *= 20;
Mel[2] *= 120;

if sum(Max) < sum(Mel):
    print("Mel")
elif sum(Max) > sum(Mel):
    print("Max")
elif sum(Max) == sum(Mel):
    print("Draw")