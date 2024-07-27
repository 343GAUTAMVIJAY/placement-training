    def power(base,exp):
        if exp==0:
            return 1
        else:
            return base*power(base,exp-1)

    base=int(input("Enter base: "))
    exp=int(input("Enter exponent: "))
    print(f"{base}^{exp}={power(base,exp)}")
    
