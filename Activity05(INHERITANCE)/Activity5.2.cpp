/*
Create a C++ program with a base class called
(Personality, Biodata, Characteristic).

Inside each class create a function that will print
something when called.

Then, create a derived class that will inherit the
three base classes and execute all their functions/methods.

Save as Activity5.02.cpp
*/

#include <iostream>
using namespace std;

// Base Class 1
class Personality {
public:
    void personalityInfo() {
        cout << "Personality: Friendly and hardworking." << endl;
    }
};

// Base Class 2
class Biodata {
public:
    void biodataInfo() {
        cout << "Biodata: Computer Engineering Student." << endl;
    }
};

// Base Class 3
class Characteristic {
public:
    void characteristicInfo() {
        cout << "Characteristic: Responsible and determined." << endl;
    }
};

// Derived Class
class Person : public Personality, public Biodata, public Characteristic {
public:
    void displayAll() {
        personalityInfo();
        biodataInfo();
        characteristicInfo();
    }
};

int main() {

    Person person;

    cout << "PERSON INFORMATION" << endl;
    cout << endl;

    person.displayAll();

    return 0;
}