#A contact book or address book is an application that stores the information (name, address, contact no, etc.) of people that you save in it. You can also edit and delete the contact.
#The objective of this project is to create an Address book using python in which the user can add a new contact, edit and delete existing contact and view all the contact.



from tkinter import *
root = Tk()                                       #Tk() use to initialized tkinter
root.geometry('400x400')                          #geometry() sets the window width and height
root.config(bg = 'SlateGray3')                    #bg use to set the background color of the window
root.resizable(0,0)                               #resizable(0,0) this command stop window to resize
root.title('DataFlair-AddressBook')               #title() used to set window’s tiltle

contactlist = [
    ['Parv Maheswari',  '0176738493'],
    ['David Sharma',  '2684430000'],
    ['Mandish Kabra',   '4338354432'],            #Contacts’ information is stored in contactlist
    ['Prisha Modi','6834552341'],
    ['Rahul kaushik',   '1234852689'],
    ['Johena Shaa' , '2119876543'],
    ]

Name = StringVar()
Number = StringVar()

frame = Frame(root)                               #Frame is like a container that is used to organized widgets
frame.pack(side = RIGHT)

scroll = Scrollbar(frame, orient=VERTICAL)                         #Here Scrollbar widget and Listbox widget is used to allow users to select from many options
select = Listbox(frame, yscrollcommand=scroll.set, height=12)     
scroll.config (command=select.yview)
scroll.pack(side=RIGHT, fill=Y)
select.pack(side=LEFT,  fill=BOTH, expand=1)

def Selected():                                                       #Selected() function used to return selected value                                                                                                    
    return int(select.curselection()[0]) 

def AddContact():                                                     #Addcontact() function used to add new contact
    contactlist.append([Name.get(), Number.get()])
    Select_set()

def EDIT():                                                            #EDIT() function will edit existing contact
    contactlist[Selected()] = [Name.get(), Number.get()]
    Select_set()


def DELETE():                                                #DELETE() function will delete selected contact
    del contactlist[Selected()]
    Select_set()

def VIEW():                                        #VIEW() function will view selected contact
    NAME, PHONE = contactlist[Selected()]
    Name.set(NAME)
    Number.set(PHONE)

def EXIT():                                                  #EXIT() used to destroy mainloop
    root.destroy()

def RESET():
    Name.set('')
    Number.set('')

def Select_set() :                                        # Select_set() will sort the manage the contactlist and also used in other functions
    contactlist.sort()
    select.delete(0,END)
    for name,phone in contactlist :
        select.insert (END, name)
Select_set()

Label(root, text = 'NAME', font='arial 12 bold', bg = 'SlateGray3').place(x= 30, y=20)             #Label() widget used when we want to display text
Entry(root, textvariable = Name).place(x= 100, y=20)             #Entry() widget used when we want to create an input text field.

Label(root, text = 'PHONE NO.', font='arial 12 bold',bg = 'SlateGray3').place(x= 30, y=70)
Entry(root, textvariable = Number).place(x= 130, y=70)

Button(root,text=" ADD", font='arial 12 bold',bg='SlateGray4', command = AddContact).place(x= 50, y=110)    #Button() widget used to display button
Button(root,text="EDIT", font='arial 12 bold',bg='SlateGray4',command = EDIT).place(x= 50, y=260)

Button(root,text="DELETE", font='arial 12 bold',bg='SlateGray4',command = DELETE).place(x= 50, y=210)
Button(root,text="VIEW", font='arial 12 bold',bg='SlateGray4', command = VIEW).place(x= 50, y=160)

Button(root,text="EXIT", font='arial 12 bold',bg='tomato', command = EXIT).place(x= 300, y=320)
Button(root,text="RESET", font='arial 12 bold',bg='SlateGray4', command = RESET).place(x= 50, y=310)

root.mainloop()
