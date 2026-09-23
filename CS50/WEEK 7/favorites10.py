import csv

with open("favorites.csv", "r") as file:

    reader = csv.DictReader(file)
    
    counts = {}
    #counts its the dictionary
    for row in reader:
        favorite = row["language"]
        try:
            counts[favorite] += 1
        except:
            counts[favorite] = 1
    # Now its using the function try in case of error
    # If its the first time of a new value appearing it just gives it the value of 1
for favorite in sorted(counts, key=counts.get, reverse=True):
    print(favorite, counts[favorite])
#The scalable version, adds each unique value to the dictionary in the row "Language"