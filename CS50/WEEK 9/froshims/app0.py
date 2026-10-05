from flask import Flask, render_template, request
app = Flask(__name__)

# validates that the sport list is allowed
# its a global variable
SPORTS = [
    "football", 
    "basketball", 
    "volleyball"
    ]

@app.route("/", methods=["GET", "POST"])
def index():
    # passes the SPORTS list to the index.html template so that it can be used 
    return render_template('index.html', sports=SPORTS)

@app.route("/register", methods=["POST"])
def register():
    if not request.form.get("name") or request.form.get("sport") not in SPORTS:
        return render_template("failure.html")   
    return render_template("success.html")