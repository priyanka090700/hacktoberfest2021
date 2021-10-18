import time
import re
import os.path
from selenium.webdriver.common.by import By
from selenium import webdriver

driver = webdriver.Chrome(service_log_path='NUL')
#driver = None
URL = "https://vtop.vit.ac.in"
CREDS = {'user':'Your username','pass':'your pasword'}
print("url done")
driver.get(URL)

#login to student
driver.find_element_by_xpath("//*[@id='page-wrapper']/div/div[1]/div[1]/div[3]/div/button").click()

time.sleep(5)
print("login to student")
#login using student cred

#username
username=driver.find_element_by_xpath("//*[@id='uname']")
driver.get
username.click()
username.send_keys(CREDS['user'])
time.sleep(5)

#password
password=driver.find_element_by_xpath("//*[@id='passwd']")
password.click()
password.send_keys(CREDS['pass'])
time.sleep(5)

#login
driver.find_element_by_xpath("//*[@id='captcha']").click()
time.sleep(5)
print("logged to use account")
time.sleep(120)
print("capcha time")

#assignment upload
print("assignement Starts")
driver.find_element_by_xpath("//*[@id='menu-toggle']").click()
time.sleep(3)
driver.find_element_by_xpath("//*[@id='EXM0017']").click()
time.sleep(3)
driver.find_element_by_xpath("//*[@id='semesterSubId']").click()
time.sleep(3)
driver.find_element_by_xpath("//*[@id='semesterSubId']/option[4]").click()
time.sleep(3)
print("assignement end")


#Assignment will be uploaded and reflected ASAP
