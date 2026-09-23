import csv

with open("favorites.csv", "r") as file:

    reader = csv.DictReader(file)
    #New funcion, dictReader
    next(reader)

    for row in reader:
        favorite = row["language"]
        #Now searchs for the column language at any location
        print(favorite)
