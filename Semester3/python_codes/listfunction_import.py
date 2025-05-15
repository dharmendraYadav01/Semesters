from tkinter import *
master=Tk()
lb=Listbox(master)
lb.insert(1,'c')
lb.insert(2,'c++')
lb.insert(3,'java')
lb.insert(4,'python')
lb.pack()
master.mainloop()