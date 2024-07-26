s=input("Enter the sentence : ").split()
a=""
for i in s:
    if i not in["on","under","in","between","and","but","or","but","because","the","a","an"]:
        a+=i.capitalize()+" "
    else:
        a+=i+" "
print(a)
