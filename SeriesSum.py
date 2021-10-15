n = int(input("Enter the number till which you want the series: "))
s1 = 0
s2 = 0
for i in range(1, n+1): 
    for j in range(1,i+1):
        s2 = s2 + j
    s1 = s1 + s2
    s2 = 0
print(s1)