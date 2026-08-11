# ACTIVITY 6
#
# You can use compound condition (Logical OR / Logical AND)
#
# Write a program that will compute for the student's average grade
# and will display the Status of the student.
#
# The user will input the following:
# - Name (String)
# - Math (int)
# - Science (int)
# - English (int)
#
# Display the average grade in 2 decimal places if it has a float value.
#
# If the average grade >= 75 and all the subject grades >= 75, display:
#
# Congratulations!
# You passed the semester
#
# If the average grade >= 75 but there is/are one/two subject grade(s)
# below 75, display:
#
# Congratulations!
# You passed the semester,
# but you need to retake the following subject(s):
# list of subject(s) failed
#
# If the average grade < 75, display:
# You failed the semester
#
# Save your source code as:
# LastName_PFAct6.py


name = input("Enter Name: ")
math = int(input("Enter Math: "))
science = int(input("Enter Science: "))
english = int(input("Enter English: "))

average = (math + science + english) / 3

print()
print("Name:", name)

if average.is_integer():
    print("Average Grade:", int(average))
else:
    print("Average Grade: {:.2f}".format(average))

if average >= 75 and math >= 75 and science >= 75 and english >= 75:
    print("Congratulations!")
    print("You passed the semester")

elif average >= 75 and (math < 75 or science < 75 or english < 75):
    print("Congratulations!")
    print("You passed the semester,")
    print("but you need to retake the following subject(s):")

    if math < 75:
        print("Math")

    if science < 75:
        print("Science")

    if english < 75:
        print("English")

else:
    print("You failed the semester")