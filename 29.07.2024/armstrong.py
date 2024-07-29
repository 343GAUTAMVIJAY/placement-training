    num=int(input("Enter an integer: "))
    sum=0
    n=len(str(num))

    for digit in str(num):
        sum+=int(digit)**n
    if sum==num:
        print(f"{num} is an Armstrong number.")
    else:
        print(f"{num} is not an Armstrong number.")
    
