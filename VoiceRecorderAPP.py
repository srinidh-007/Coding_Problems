# This one got my attention very much
# Building a voice recorder app is very simple than expected using python

# python provides a very interesting library called sounddevice
# in which the input audio is recorded

# Using the soundfile library, we can save the recorded voice as FLAC file
import sounddevice as svd
import soundfile as svf
from tkinter import *

def recored_voice():

    # Setiing the sampling rate/Frequency to the standard value
    fs = 48000

    # We can set the duration of the recording manually by changing this value of the variable
    duration = 5
    recordingFile = svd.rec(int(duration*fs), samplerate=fs, channels=2)

    svd.wait()

    #save as FLAC file at correct sampling rate
    return svf.write('recording.flac', recordingFile, fs)



# Now this part is the main one
# this function is used to design the UI of the application
# its not too much complicated, But just a simple UI

# Tkinter is mainly used to build the UI and other cool stuff
master = Tk()


# Designing the UI
Label(master, text=" Voice Recorder: ").grid(row=0, sticky=W, rowspan=5)

b = Button(master, text="Start", command=recored_voice)
b.grid(row=0, column=2, columnspan=2, rowspan=2, padx=5, pady=5)

# Runnung the main loop
mainloop()

