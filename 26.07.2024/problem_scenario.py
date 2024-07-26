amount=int(input("Enter an amount: "))
print("Press 1 for 500 note")
print("Press 2 for 100 note")
print("Press 3 for 20 note")
print("Press 4 for 10 note")
print("Press 5 for 5 note")
print("Press 6 for 2 note")
print("Press 7 for 1 note")
option=int(input("Enter your option: "))

if option==1:
    notes=amount/500
    print("No. Of 500 notes:",notes)
elif option==2:
    notes=amount/100
    print("No. Of 100 notes:",notes)
elif option==3:
    notes=amount/20
    print("No. Of 20 notes:",notes)
elif option==4:
    notes=amount/10
    print("No. Of 10 notes:",notes)
elif option==5:
    notes=amount/5
    print("No. Of 5 notes:",notes)
elif option==6:
    notes=amount/2
    print("No. Of 2 notes:",notes)
elif option==7:
    notes=amount/1
    print("No. Of 1 notes:",notes)
else:
    print("Invalid option.")
