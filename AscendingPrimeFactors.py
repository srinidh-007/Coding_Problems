n = int(input("Enter a number to find it's prime factors: "))
for i in range(2,n+1):
    if (n%i) == 0:
        x = i
        for j in range(2,x):
            if (x%j) == 0:
                break
        else:
            print(x)