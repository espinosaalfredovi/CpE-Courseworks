# ACTIVITY 8
#
# Write a program that adds two numbers and determines if the sum
# of the two numbers is even or odd.
#
# 1. The program will prompt the user to enter first number and
#    second number.
#
# 2. The program will display:
#    "The sum of two numbers is Even"
#    or
#    "The sum of two numbers is Odd"
#
# Example:
#
# Enter first number: 3
# Enter second number: 2
# The sum of two numbers is Odd
#
# 3. The program will ask if the user wants to try again.
#    The user will input Y/y if Yes and N/n if No.
#
# 4. If yes, it will repeat the process.
#
# 5. If no, the program will display:
#    "Thank you!"
#
# Save your source code as:
# LastName_PFAct8.py


choice = "Y"

while choice == "Y" or choice == "y":

    first_number = int(input("Enter first number: "))
    second_number = int(input("Enter second number: "))

    total = first_number + second_number

    if total % 2 == 0:
        print("The sum of two numbers is Even")
    else:
        print("The sum of two numbers is Odd")

    print()

    choice = input("Do you want to try again? (Y/N): ")

    print()

print("Thank you!")