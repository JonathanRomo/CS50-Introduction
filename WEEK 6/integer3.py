try:
    n = int(input("Input: "))
    print("Integer")
except ValueError:
    print("Not integer")
#instead of relying on the inputs, it tries to excecute only when the conditions are valid