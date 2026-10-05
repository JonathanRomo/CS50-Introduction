from cs50 import SQL
from flask import Flask, redirect, render_template, request
app = Flask(__name__)
db = SQL("sqlite:///froshims.db")

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

# Using post method to send data to the server, which is more secure than get method. 
# The post method does not append the data to the URL, so it is not visible to the user and cannot be bookmarked or shared
@app.route("/deregister", methods=["POST"])
def deregister():
    # Get the ID of the registrant to deregister
    id = request.form.get("id")
    if id:
        return render_template("error.html", message="Missing ID")
    # Remove the registrant from the database
    db.execute("DELETE FROM registrants WHERE id = ?", id)
    # Redirect to the registrants page
    return redirect("/registrants")

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
    # For protection we use the placeholder "?" to prevent SQL injection attacks. This is a good practice to ensure that user input is properly sanitized and does not allow malicious code to be executed on the server.
    db.execute("INSERT INTO registrants (name, sport) VALUES(?, ?)", name, sport)
    
    # Confirmed
    return redirect("/registrants")

@app.route("/registrants", methods=["POST"])
def register():
    #new variable registrants
    registrants = db.execute("SELECT * FROM registrants")
    return render_template("registrants2.html", registrants=registrants)