import sys

# Ensure at least one argument is passed
if len(sys.argv) < 2:
    sys.exit("Too few arguments")

# Loop through all arguments and greet each one
for arg in sys.argv[1:]:
    print(f"Hello, Mi llamo {arg}")
