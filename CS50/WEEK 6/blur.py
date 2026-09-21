from PIL import Image, ImageFilter

before = Image.open("bride.bmp")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.bmp")