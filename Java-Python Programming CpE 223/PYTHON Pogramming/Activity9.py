# ACTIVITY 9
#
# Write a word bank program using list.
#
# 1. The program will prompt the user to enter a word.
#
# 2. The program will store the word in a list.
#
# 3. The program will ask if the user wants to try again.
#    The user will input Y/y if Yes and N/n if No.
#
# 4. If Yes, repeat the process in Step 1.
#
# 5. If No, display the total number of words and
#    all the words the user entered.
#
# Save your source code as:
# LastName_PFAct9.py


word_bank = []
choice = "Y"

while choice == "Y" or choice == "y":

    word = input("Enter a word: ")
    word_bank.append(word)

    choice = input("Do you want to try again? (Y/N): ")
    print()

print("Total number of words:", len(word_bank))
print("Words entered:")

for word in word_bank:
    print(word)