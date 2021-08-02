from google_images_download import google_images_download

response = google_images_download.googleimagesdownload()
arguments = {"keywords": "서 은 광", "Seo Eunkwang" "limit": 10,
             "print_urls": True,
             "format": "jpg"}
paths = response.download(arguments)
print(paths)
