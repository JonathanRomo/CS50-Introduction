from flask import Flask, render_template

# turns the current file into a Flask application
app = Flask(__name__)

#python decorator that tells Flask what URL should trigger our function
@app.route("/")
def index():
    return render_template('index.html')