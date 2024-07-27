principal=float(input("Enter principal amount: "))
rate=float(input("Enter rate of interest (in %): "))
time=float(input("Enter time period (in years): "))
si=(principal*rate*time) / 100
print(f"Simple Interest: {si:.2f}")
