import sys
#imports the whole library not just functions

#asks for 2 words
#tells the function to be used from the library
if len(sys.argv) != 2:
    print("Missing commmand-line argument")
    sys.exit(1)

print(f"hello, {sys.argv[1]}")
sys.exit(0)