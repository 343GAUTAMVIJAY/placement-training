    num=int(input("Enter a number: "))
    if num>1:
        for i in range(2,num//2+1):
            if num%i==0:
                print("Not a prime number.")
                break
        else:
            print("Prime number.")
    else:
        print("Not a prime number.")
    

