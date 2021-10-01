# Program to display the Current Time (Hours, Minutes, Seconds)

# Importing tkinter Module
from tkinter import *
from tkinter.ttk import *

# Using strftime function get the time of system.
from time import strftime

# Creating window using tkinter
root = Tk()
root.title('Clock')

#Displaying Time
def time():
    string = strftime('%H:%M:%S %p')
    lbl.config(text=string)
    lbl.after(1000, time)

#Adding styles to the output
lbl = Label(root, font=('calibri', 35, 'bold'),
            background='black',
            foreground='white')

lbl.pack(anchor='center')
time()

mainloop()