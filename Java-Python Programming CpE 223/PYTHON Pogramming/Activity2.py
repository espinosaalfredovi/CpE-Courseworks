# ACTIVITY 2

#

# Create a Simple Weekly Payroll.

#

# The program should accept the following inputs:

#

# - Employee Name

# - Number of hours rendered

# - Rate per hour

# - GSIS Premium Contribution

# - PhilHealth Contribution

# - Housing Loan

# - Tax percentage rate

# (Example: if you input 25, it means 25%)

#

# The program should compute:

# - Weekly Gross Salary

# - Total Deductions

# - Weekly Net Salary

#

# Sample Run:

#

# Enter Employee Name: John Doe

# Enter number of hours rendered: 40

# Enter rate per hour: 500

# GSIS Premium: 800

# PhilHealth: 300

# Housing Loan: 1000

# Tax rate: 25

# ====================================

# Gross Salary: 20000

# Total deductions: 7100.0

# Net Salary: 12900.0

#

# Save your source code with a filename:

# LastName_PFAct2.py

employee_name = input("Enter Employee Name: ")
hours_rendered = float(input("Enter number of hours rendered: "))
rate_per_hour = float(input("Enter rate per hour: "))

gsis = float(input("GSIS Premium: "))
philhealth = float(input("PhilHealth: "))
housing_loan = float(input("Housing Loan: "))
tax_rate = float(input("Tax rate: "))

gross_salary = hours_rendered * rate_per_hour

tax = gross_salary * (tax_rate / 100)

total_deductions = gsis + philhealth + housing_loan + tax

net_salary = gross_salary - total_deductions

print("====================================")
print("Gross Salary:", gross_salary)
print("Total deductions:", total_deductions)
print("Net Salary:", net_salary)
