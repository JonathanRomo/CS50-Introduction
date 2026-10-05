from cs50 import SQL
from flask import Flask, redirect, render_template, request, session
from flask_session import Session

# Configure app
app = Flask(__name__)

# Connect to database
db = SQL("sqlite:///store.db")

# Configure session
# Enables cookies
# Enables to store data on the server side instead of the client side
app.config["SESSION_PERMANENT"] = False
app.config["SESSION_TYPE"] = "filesystem"
Session(app)

# Gets the books from the database and displays them on the index page
@app.route("/")
def index():
    books = db.execute("SELECT * FROM books")
    return render_template("books.html", books=books)


@app.route("/cart", methods=["GET", "POST"])
def cart():

    # Ensure cart exists
    if "cart" not in session:
        # Initialize cart as an empty list in the session
        session["cart"] = []

    # POST
    # If the user submits the form to add a book to the cart, the server will handle the POST request. It retrieves the book's ID from the form data and appends it to the cart list stored in the session. After adding the book, it redirects the user back to the cart page to view their updated cart.
    if request.method == "POST":
        book_id = request.form.get("id")
        if book_id:
            session["cart"].append(book_id)
        return redirect("/cart")

    # GET
    books = db.execute("SELECT * FROM books WHERE id IN (?)", session["cart"])
    return render_template("cart.html", books=books)
