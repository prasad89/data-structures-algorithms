Index = 0
n = 5

Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

for i in range(n):
    for j in range(n):
        print("* ", end="")
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

for i in range(n):
    for j in range(i+1):
        print("* ", end="")
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

for i in range(n):
    num = 0
    for j in range(i+1):
        num += 1
        print(num, "", end="")
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

num = 0
for i in range(n):
    num += 1
    for j in range(i+1):
        print(num, "", end="")
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

for i in range(n):
    for j in range(n-i):
        print("* ", end="")
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

for i in range(n):
    num = 0
    for j in range(n-i):
        num += 1
        print(num, "", end="")
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

for i in range(n):
    for j in range(n-i-1):
        print("  ", end="")
    for j in range(2*i+1):
        print("* ", end="")
    for j in range(n-i-1):
        print("  ", end="")
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

for i in range(n):
    for j in range(i):
        print("  ", end="")
    for j in range(2*n-(2*i+1)):
        print("* ", end="")
    for j in range(i):
        print("  ", end="")
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

for i in range(n):
    for j in range(i+1):
        print("* ", end="")
    print("\r")
for i in range(n-1):
    for j in range(n-1-i):
        print("* ", end="")
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

num = 0
for i in range(n):
    if (i % 2 == 0):
        num = 1
    else:
        num = 0
    for j in range(i+1):
        print(num, "", end="")
        num = 1 - num
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

num = 0
for i in range(n):
    for j in range(i+1):
        num += 1
        print(num, "", end="")
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

for i in range(n):
    ch = 65
    for j in range(i+1):
        print(chr(ch), "", end="")
        ch += 1
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

for i in range(n):
    ch = 65
    for j in range(n-i):
        print(chr(ch), "", end="")
        ch += 1
    print("\r")


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

ch = 65
for i in range(n):
    for j in range(i+1):
        print(chr(ch), "", end="")
    print("\r")
    ch += 1


Index += 1
print("-------------------------Pattern:", Index, "-------------------------")

ch = 65
for i in range(n):
    for j in range(i+1):
        print(chr(ch+n-j-1), "", end="")
    print("\r")
