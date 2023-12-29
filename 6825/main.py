m = float(input())
k = float(input())
bmi = m/(k*k)
print(m,k,bmi)

if bmi >= 25:
    print("Overweight")
elif bmi >= 18.5 and bmi <= 25.0:
    print("Normal weight")
elif bmi <= 18.5:
    print("Underweight")