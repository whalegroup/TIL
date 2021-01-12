import urllib.request
import urllib.parse
from bs4 import BeautifulSoup

baseurl = 'https://search.naver.com/search.naver?where=post&sm=tab_jum&query='
lusurl = input("검색어를 입력하세요")
url = baseurl+urllib.parse.quote_plus(plusurl)

html = urllib.request.urlopen(url).read()
soup = BeautifulSoup(html, 'html.parser')
title = soup.find_all(class_='sh_blog_title')
f = open('text.txt', 'w', encoding = 'utf-8')

for i in title:
f.write(i.attrs['title'])
    f.write('\n')
    f.write('\n')
    f.write(i.attrs['href'])
    f.write('\n')
    f.write('\n')

f.close
