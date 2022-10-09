"""Library that helps in image formatting

To Install lib : pip install pillow
"""
from PIL import Image

im = Image.open("dummy.jpg")
im.show()
print(im.format, im.size, im.mode)


