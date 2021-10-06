#Project :Text to speech is a process to convert any text into voice


# About project: In this program I have used python 'tkinter' library for rendering graphics on a display window, 'gTTs' (google text to speech) library to convert text to voice, and 'playsound' library to play that converter voice from the text.

from tkinter import *
From gtts import gTTS
From playsound import playsound

root = Tk()  #Tk() to initialized tkinter which will be used for GUI
geometry root.("350x300") #geometry() used to set the width and height of the window
root.configure(bg='ghost white')  #configure() used to access window attributes
root.title("DataFlair - TEXT TO SPEECH") #title() set the title of the window


#Label() widget is used to display one or more than one line of text that users can’t able to modify.

Label(root, text = "TEXT_TO_SPEECH", font = "arial 20 bold", bg='white smoke').pack() # root is the name which we refer to our window
Label(text ="DataFlair", font = 'arial 15 bold', bg ='white smoke' , width = '20').pack(side = 'bottom')
Msg = StringVar()
Label(root,text ="Enter Text", font = 'arial 15 bold', bg ='white smoke').place(x=20,y=60)
entry_field = Entry(root, textvariable = Msg ,width ='50')  #Entry() used to create an input text field
entry_field.place(x=20,y=100)

def Text_to_speech():
    Message = entry_field.get() #Message variable will stores the value of entry_field
    
    speech = gTTS(text = Message) #speech stores the converted voice from the text
    
    speech.save('DataFlair.mp3') #speech.save(‘DataFlair.mp3’) will saves the converted file as DataFlair as mp3 file
    
    playsound('DataFlair.mp3') #playsound() used to play the sound

#Function to Exit
def Exit():
    root.destroy()

#Function to Reset
def Reset():
    Msg.set("")
    
#Button() widget used to display button on the window
Button(root, text = "PLAY", font = 'arial 15 bold' , command = Text_to_speech ,width = '4').place(x=25,y=140)
Button(root, font = 'arial 15 bold',text = 'EXIT', width = '4' , command = Exit, bg = 'OrangeRed1').place(x=100 , y = 140)
Button(root, font = 'arial 15 bold',text = 'RESET', width = '6' , command = Reset).place(x=175 , y = 140)

#root.mainloop() is a method that executes when we want to run our program.
root.mainloop()
