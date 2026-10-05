from flask import Flask, render_template, request
app = Flask(__name__)

# validates that the sport list is allowed
# its a global variable
SPORTS = [
    "football", 
    "basketball", 
    "volleyball"
    ]

# Curly braces to denote a dictionary
REGISTRANTS = { }

@app.route("/", methods=["GET", "POST"])
def index():
    # passes the SPORTS list to the index.html template so that it can be used 
    return render_template('index.html', sports=SPORTS)

@app.route("/register", methods=["POST"])
def register():
    # Validate name
    name = request.form.get("name")
    if not name:
        return render_template("error.html", message="Missing name")
    # Validate sport
    sport = request.form.get("sport")
    if not sport:
        return render_template("error.html", message="Missing sport")
    if sport not in SPORTS:
        return render_template("error.html", message="Invalid sport selected")

    # Remember the student registered
    REGISTRANTS[name] = sport
    
    # Confirmed
    return render_template("success.html")

@app.route("/registrants", methods=["POST"])
def register():
    return render_template("registrants.html", registrants=REGISTRANTS)