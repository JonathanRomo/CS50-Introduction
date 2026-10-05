from flask import Flask, render_template, request

# turns the current file into a Flask application
app = Flask(__name__)

#python decorator that tells Flask what URL should trigger our function
@app.route("/")
def index():
    return render_template('index4.html')

# re reoutes the user to the greet.html page and passes the name parameter from the query string
@app.route("/greet")
def greet():
   return render_template('greet.html', name=request.args.get("name", "World"))