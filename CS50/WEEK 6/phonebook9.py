import csv

name = input("Name: ")
number = input ("Number: ")

with open("phonebook.csv", "a") as file:

    writer = csv.DictWriter(file,fieldnames=["name", "number"])
    writer.writerow({"name": name, "number": number})
#adds the headers to the csv generated and takes the values especified in fieldnames
#closes the file automatically