from flask import Flask, render_template, request

# turns the current file into a Flask application
app = Flask(__name__)

@app.route("/", methods=["GET", "POST"])
def index():
   if request.method == "POST":
      # assume that form was submitted
      return render_template('greet2.html', name=request.form.get("name", "World"))
   else:
      # assume that no form was submitted, so show the form
      return render_template('index7.html')