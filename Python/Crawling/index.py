#!/usr/bin/env python3
# Anchor extraction from HTML document
from bs4 import BeautifulSoup
from urllib.request import urlopen

response = urlopen('https://naver.com/')
soup = BeautifulSoup(response, 'html.parser')
i = 1
f = open("New file.txt", 'w')
for anchor in soup.select("span.keyword"):
    data = str(i) + anchor.get_test() + "\n"
    i = i + 1
    f.write(data)
f.close()

