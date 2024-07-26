
import tkinter as tk
from tkinter import messagebox as m
def fn():
    m.showinfo("","Loged in Successfully")
t=tk.Tk()
t.title("Login Window")
a1=tk.Label(t,text="User Name : ")
a1.place(x=10,y=60)
e1=tk.Entry(t)
e1.place(x=200,y=60)
a2=tk.Label(t,text="Password : ")
a2.place(x=10,y=120)
e2=tk.Entry(t)
e2.place(x=180,y=120)
b=tk.Button(t,text=" Submit ",command=fn)
b.place(x=180,y=200)
t.mainloop()
