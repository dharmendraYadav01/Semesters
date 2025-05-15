# The entry is used to display single line tet field to the user it is commonly used to except user value.
# from tabnanny import check
# from tkinter import *
# master =Tk()
# Label(master,text='First name').grid(row=0)
# Label(master,text='Last name').grid(row=1)
# e1=Entry(master)
# e2=Entry(master)
# e1.grid(row=0,column=1)
# e2.grid(row=1,column=1)
# mainloop()

# # for checkbutton
# from tkinter import *
# master=Tk()
# a=IntVar()
# Checkbutton(master,text='c',variable=a).grid(row=0,sticky=W)
# b=IntVar()
# Checkbutton(master,text='c++',variable=b).grid(row=1,sticky=W)
# c=IntVar()
# Checkbutton(master,text='java',variable=c).grid(row=2,sticky=W)
# d=IntVar()
# Checkbutton(master,text='python',variable=d).grid(row=3,sticky=W)
# mainloop()


# for radiobutton
from importlib.resources import Anchor
from tkinter import *
master=Tk()
a=IntVar()
Radiobutton()(master,text='c',variable=a,value=1).pack(anchor=W)
Radiobutton()(master,text='c++',variable=a,value=2).pack(anchor=W)
Radiobutton()(master,text='java',variable=a,value=3).pack(anchor=W)
Radiobutton()(master,text='python',variable=a,value=4).pack(anchor=W)
mainloop()
