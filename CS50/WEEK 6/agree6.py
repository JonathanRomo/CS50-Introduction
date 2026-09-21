s = input("Do you agree?").lower()
#forces the input to be lowercase

if s in ["y","yes"]:
    print("Agreed.")
else:
    print("Not agreed.")