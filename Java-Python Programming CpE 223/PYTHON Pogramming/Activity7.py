# ACTIVITY 7
#
# Write a program using while loop that displays
# the following output on the screen:
#
# Number        Squared        Cube
# 1             1              1
# 2             4              8
# 3             9              27
# 4             16             64
# 5             25             125
#
# Save your source code as:
# LastName_PFAct7.py


print("Number\t\tSquared\t\tCube")

number = 1

while number <= 5:
    squared = number ** 2
    cube = number ** 3

    print(number, "\t\t", squared, "\t\t", cube)

    number += 1