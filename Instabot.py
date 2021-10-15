from instabot import Bot
b = Bot()
choice = int(input("Login : 1 \nUpload image : 2 \nFollow : 3 \nSend message : 4\n"))
print("")
while(choice!=5):
    if(choice==1):
        p=input("Enter the username : ")
        q=input("Enter the password : ")
        b.login(username=p,password=q)
    if(choice==2):
        m = str(input("Enter the image location : "))
        n=str(input("Write a caption : \n"))
        b.upload_photo(m,caption=n)
    if(choice==3):
        t=str(input("Enter the username of the personality to be followed : "))
        b.follow(t)
    if(choice==4):
        l=[]
        n=int(input("Enter the number of people whom the message is needed to be sent : "))
        while(n):
            s=str(input("Enter the username to whom the message is to be sent"))
            l.append(s)
            n-=1
        w=str(input("Enter the message needed to be sent : \n"))
        b.send_message(w,l)    
    
            
