/*
Create a C++ program with a class name “Animals”. The program has
functions/methods which will print when the corresponding method is called.

METHODS:
Cow  - "MOOOO!!!!"
Dog  - "WOF WOF WOF"
Bird - "TWIT TWIT"
Cat  - "Meow Meow"

The program will ask the user to choose an animal.

Use outside method in constructing your program.

Save as Activity2_01.cpp
*/

#include <iostream>
using namespace std;

class Animals {
public:
    void Cow();
    void Dog();
    void Bird();
    void Cat();
};

// Methods defined outside the class

void Animals::Cow() {
    cout << "You have chosen a cow: MOOOO!!!!" << endl;
}

void Animals::Dog() {
    cout << "You have chosen a dog: WOF WOF WOF" << endl;
}

void Animals::Bird() {
    cout << "You have chosen a bird: TWIT TWIT" << endl;
}

void Animals::Cat() {
    cout << "You have chosen a cat: Meow Meow" << endl;
}

int main() {
    Animals animal;
    char choice;

    cout << "Choose an animal to know its sound." << endl;
    cout << "Press the corresponding number of your choice..." << endl;
    cout << endl;

    cout << "1. Cow" << endl;
    cout << "2. Dog" << endl;
    cout << "3. Bird" << endl;
    cout << "4. Cat" << endl;

    cout << "Enter your Choice: ";
    cin >> choice;

    switch (choice) {
        case '1':
        case 'A':
        case 'a':
            animal.Cow();
            break;

        case '2':
        case 'B':
        case 'b':
            animal.Dog();
            break;

        case '3':
        case 'C':
        case 'c':
            animal.Bird();
            break;

        case '4':
        case 'D':
        case 'd':
            animal.Cat();
            break;

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}