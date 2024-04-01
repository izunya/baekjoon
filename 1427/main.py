import sys
input = sys.stdin.readline

a = input()

zero = a.count("0")
one = a.count("1")
two = a.count("2")
three = a.count("3")
four = a.count("4")
five = a.count("5")
six = a.count("6")
seven = a.count("7")
eight = a.count("8")
night = a.count("9")
l = ""
l += "9"*night
l += "8"*eight
l += "7"*seven
l += "6"*six
l += "5"*five
l += "4"*four
l += "3"*three
l += "2"*two
l += "1"*one
l += "0"*zero
print(l)