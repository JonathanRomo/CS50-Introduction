from flask import Flask

# turns the current file into a Flask application
app = Flask(__name__)

#python decorator that tells Flask what URL should trigger our function
@app.route("/")
def index():
    return '<!DOCTYPE html><html lang="en"><head><title>My App</title></head><body><h1>Hello, World!</h1></body></html>'