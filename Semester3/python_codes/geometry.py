from tkinter import Entry, Label, Tk

master=Tk()
master.geometry("400x400")
name=Label(master,text="Name").place(x=30,y=50)
email=Label(master,text="email").place(x=30,y=80)
password=Label(master,text="password").place(x=30,y=110)
e1=Entry(master).place(x=90,y=50)
e2=Entry(master).place(x=90,y=80)
e3=Entry(master).place(x=90,y=110)
master.mainloop()