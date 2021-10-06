# This is a simple program where you can easily login to FB using a single python file
# Remember to install the latest version of selenium in your machine
# Check your chrome version and install appropriate chrome drivers to run the programme successfully
# Permissions should be given to every file where ever necessary


#Importing Selenium
from selenium import webdriver
from time import sleep


#You should write your emailID or phone number and password of your facebook account in these variables
usr = "Your emailID or Phone Number"
pwd = "Your Password"


#connecting your chrome driver here
#remember to give the correct path and permissions
driver = webdriver.Chrome('Path to your chromedriver')
driver.get('https://www.facebook.com/')
print("Opened Facebook")
sleep(1)

#Accessing the username in the fb site
username_box = driver.find_element_by_id('email')
username_box.send_keys(usr)
print("Email Entered")


#Accessing the password in the fb site
password_box = driver.find_element_by_id('pass')
password_box.send_keys(pwd)
print("Password entered")


#Finally Logging in
login_box = driver.find_element_by_name('login')
login_box.click()
print("done")

#Selenium is a beautiful library offered by python to build cool stuff which you like