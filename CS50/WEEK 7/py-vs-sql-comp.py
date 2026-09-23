import csv

with open("favorites.csv", "r") as file:

    reader = csv.DictReader(file)
    
    counts = {}

    for row in reader:
        favorite = row["language"]
        try:
            counts[favorite] += 1
        except:
            counts[favorite] = 1

for favorite in sorted(counts, key=counts.get, reverse=True):
    print(favorite, counts[favorite])

## SQL
SELECT language, COUNT(*) FROM favorites GROUP BY language ORDER BY favorite;