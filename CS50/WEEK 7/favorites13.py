## do not use in the real world
from cs50 import SQL

db = SQL("sqlite:///favorites.db")

favorite = input("Favorite: ")

rows = db.execute(f"SELECT COUNT (*) AS n FROM favorites WHERE problem = '{favorite}'")

row = rows[0]

print(row["n"])
## not optimal
## this form allows the SQL injection hack