/*
Create a C++ program that will ask the user the personal information
of a person (create a class named person).

The attributes of the class (person) are:
Name
Contact No.
Age

Create an object name student and employee from a class (person).

Lastly the program will display the information of the student or
employee that is given by the user.

Create a method named (information) that will display the data if called.

Use Inside method with parameter.

Save as Activity2_02.cpp
*/

#include <iostream>
#include <string>
using namespace std;

class person {
public:
    string name;
    string contactNo;
    int age;

    // Inside method with parameter
    void information(string type) {
        cout << endl;
        cout << type << " Info:" << endl;
        cout << "Name: " << name << endl;
        cout << "Contact No.: " << contactNo << endl;
        cout << "Age: " << age << " years old" << endl;
    }
};

int main() {

    person student;
    person employee;

    char choice;

    cout << "Press S if you are a Student and E if you are an Employee." << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cin.ignore();

    if (choice == 'S' || choice == 's') {

        cout << "Enter Student Name: ";
        getline(cin, student.name);

        cout << "Enter Student Contact No.: ";
        getline(cin, student.contactNo);

        cout << "Enter Student Age: ";
        cin >> student.age;

        student.information("Student");
    }

    else if (choice == 'E' || choice == 'e') {

        cout << "Enter Employee Name: ";
        getline(cin, employee.name);

        cout << "Enter Employee Contact No.: ";
        getline(cin, employee.contactNo);

        cout << "Enter Employee Age: ";
        cin >> employee.age;

        employee.information("Employee");
    }

    else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}