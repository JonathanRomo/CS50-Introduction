from flask import Flask, render_template, request

# turns the current file into a Flask application
app = Flask(__name__)

#python decorator that tells Flask what URL should trigger our function
@app.route("/")
def index():
    # get the value of the "name" query parameter from the URL
    name = request.args["name"]
    # render the index.html template and pass the value of "name" to it
    return render_template('index.html', placeholder=name)