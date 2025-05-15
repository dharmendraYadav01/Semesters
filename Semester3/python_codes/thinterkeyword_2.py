import tkinter as tk
r=tk.Tk()
r.title('tkinter program')
button=tk.Button(r,text='quit', width=25,command=r.destroy)
button.pack()
r.mainloop()