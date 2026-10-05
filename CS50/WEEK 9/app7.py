from flask import Flask, render_template, request

# turns the current file into a Flask application
app = Flask(__name__)

#python decorator that tells Flask what URL should trigger our function
@app.route("/")
def index():
    # get the value of the "name" query parameter from the URL, defaulting to "World" if not provided
    name = request.args.get("name", "World")
    return render_template('index.html', name=name)
   