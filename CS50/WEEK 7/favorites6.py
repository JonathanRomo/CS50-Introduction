import csv

with open("favorites.csv", "r") as file:

    reader = csv.DictReader(file)
    
    counts = {}

    for row in reader:
        favorite = row["language"]
        counts[favorite] += 1
    else:
        counts[favorite] = 1
    #If its the first time of a new value appearing it just gives it the value of 1
for favorite in counts:
    print(favorite,counts[favorite])
#The scalable version, adds each unique value to the dictionary in the row "Language"

