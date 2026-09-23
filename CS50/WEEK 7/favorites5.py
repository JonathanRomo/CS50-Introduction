import csv

with open("favorites.csv", "r") as file:

    reader = csv.DictReader(file)
    
    scratch, c, python = 0, 0, 0

    for row in reader:
        favorite = row["language"]
        #Now searchs for the column language at any location
        if favorite == "Scratch":
            scratch += 1
        elif favorite == "C":
            c += 1 
        elif favorite == "Python":
            python += 1
        #Counts the time echa ones apprears
print(f"Scratch: {scratch}")
print(f"c: {c}")
print(f"Python: {python}")
