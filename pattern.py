n=int(input("Enter any number > "))
m=n
a=[]
for i in range(2*n-1):
 a.append([])

for i in range(2*n-1):
    for j in range(2*n-1):
        a[i].append(0) 
for i in range(n):
    for j in range(i,2*n-1-i):
        for k in range(i,2*n-1-i):
            a[j][k]=m
    m-=1    

for i in range(2*n-1):
    print(a[i])