# Many times we used to handle urls which have a very 
# long length and it is very hard to use it

# Python provides a cool library in which we can easily shorten our url in a shortcut manner, 
# so that it is very handy to use

# Import the library pyshorteners
import pyshorteners as ps
url = input("Enter The URL: ")

# The function used to read the url and convert it to a short one
s = ps.Shortener().tinyurl.short(url)
print("The shortened URL is: ", s)

