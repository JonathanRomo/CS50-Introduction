# List of dictionaries containing contact information
people = [
    {"name": "Kelly", "number": "+1-617-495-1000"},
    {"name": "David", "number": "+1-617-495-1000", "email": "malan@harvard.edu"},
    {"name": "John", "number": "+1-949-468-2750"}     
]
        
# Prompt the user to enter a name to search for
name = input("Name: ")

# Iterate through each dictionary in the list
for person in people:
    # Check if the current person's name matches the requested name
    if person["name"] == name:
        # Retrieve the phone number and print it
        number = person["number"]
        print(f"Found: {number}")
        # Exit the loop as soon as a match is found
        break
else:
    # Executed only if the loop finishes without hitting a 'break' statement
    print("Not found")
