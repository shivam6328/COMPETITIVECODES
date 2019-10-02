#web scraping
import requests
import re
from bs4 import BeautifulSoup as bs
x=requests.get('https://www.tutorialspoint.com/python_web_scraping/python_modules_for_web_scraping.htm#')
#print(x.text[0:500])
#x=bs(x.text,'lxml')
print(re.findall('Microsoft',x.content))
#print(x[:100])