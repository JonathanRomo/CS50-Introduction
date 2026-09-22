import qrcode

img = qrcode.make("www.linkedin.com/in/jonathanromomacias")
img.save("qr2.png","PNG")
