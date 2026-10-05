from flask import Flask, render_template, request

# turns the current file into a Flask application
app = Flask(__name__)

#python decorator that tells Flask what URL should trigger our function
@app.route("/")
def index():
    return render_template('index4.html')

# re reoutes the user to the greet.html page and passes the name parameter from the query string
# by default, the greet function will only respond to GET requests. However, if you want to allow POST requests as well, you can modify the route decorator to include the methods parameter
@app.route("/greet", methods=["POST"])
def greet():
   # to use the post method, you can access the form data using request.form instead of request.args. Now the greet function that uses request.form to retrieve the name parameter from the form data
   return render_template('greet.html', name=request.form.get("name", "World"))