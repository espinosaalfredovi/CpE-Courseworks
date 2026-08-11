# ACTIVITY 3

#

# Sample Run:

#

# Enter Name: Christian

# Enter Math: 75

# Enter Science: 74

# Enter English: 70

# Average Grade: 73

# You failed the semester.

#

# Save your source code as:

# LastName_PFAct3.py

name = input("Enter Name: ")
math = int(input("Enter Math: "))
science = int(input("Enter Science: "))
english = int(input("Enter English: "))

average = (math + science + english) / 3

if average.is_integer():
    print("Average Grade:", int(average))
else:
    print("Average Grade:", round(average, 2))

if average >= 75:
    print("You passed the semester.")
else:
    print("You failed the semester.")
