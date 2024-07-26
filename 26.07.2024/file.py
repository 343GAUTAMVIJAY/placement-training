with open("source.txt","r") as f:
    t=f.readlines()
with open("copy.txt","w") as f:
    x=list(map(lambda x:x.strip(),t))
    for i in range(len(x)):
        if x[i].startswith("THE"):
            f.write(t[i])
print("Data written to the file sucessfully!")
