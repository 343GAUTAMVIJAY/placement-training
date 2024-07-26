from numpy import *
n=int(input("Enter no of rows: "))
if n>0:
    l=ones((n,n))
    for i in range(0,n):
        for j in range(i+1):
            if j!=0 and j!=i:
                l[i][j]=l[i-1][j-1]+l[i-1][j]
            print(int(l[i][j]),end=' ')
        print("")
else:
    print("Invalid input")
