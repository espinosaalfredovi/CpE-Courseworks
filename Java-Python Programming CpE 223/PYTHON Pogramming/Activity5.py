# ACTIVITY 5

#

# Write a program that will check the employees' years in service and office.

#

# - The user will input number of years in service and the following offices:

# IT, ACCT, HR.

# - Check the following conditions given on the table.

# - The program should display the amount.

#

# Years in Service:

#

# Office     >= 10 Years     Below 10 Years

# IT            10000             5000

# ACCT          12000             6000

# HR            15000             7500

#

# SAMPLE RUN:

#

# Enter years in service: 15

# Enter office: IT

# Amount Given: 10000

#

# SAMPLE RUN:

#

# Enter years in service: 8

# Enter office: HR

# Amount Given: 7500

years = int(input("Enter years in service: "))
office = input("Enter office: ").strip().upper()

if office == "IT":
    if years >= 10:
        amount = 10000
    else:
        amount = 5000

elif office == "ACCT":
    if years >= 10:
        amount = 12000
    else:
        amount = 6000

elif office == "HR":
    if years >= 10:
        amount = 15000
    else:
        amount = 7500

else:
    amount = 0
    print("Invalid office.")

if amount > 0:
    print("Amount Given:", amount)
