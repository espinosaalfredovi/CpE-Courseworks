/*
1. Create a C++ program with a class named (Biodata). Create a constructor
   with (name, age and contact number) parameters. The program will ask
   the user his/her name, age and contact number. Use the constructor in
   order to print the following data below every time you create an object.

   Create an instance of a class or object named (Student and Employee)
   in the main function.

   Save as Activity3_01.cpp
*/

#include <iostream>
#include <string>
using namespace std;

class Biodata {
public:
    string name;
    int age;
    string contactNumber;

    // Constructor with parameters
    Biodata(string n, int a, string contact) {
        name = n;
        age = a;
        contactNumber = contact;

        cout << "\nHello!! " << name << endl;
        cout << "You are " << age << " year's old" << endl;
        cout << "I'll call u with this number " << contactNumber << endl;
    }
};

int main() {

    string studentName;
    string studentNumber;
    int studentAge;

    string employeeName;
    string employeeNumber;
    int employeeAge;

    cout << "Enter Student data below..." << endl;

    cout << "Name: ";
    getline(cin, studentName);

    cout << "Age: ";
    cin >> studentAge;

    cout << "Number: ";
    cin >> studentNumber;

    // Create Student object
    Biodata Student(studentName, studentAge, studentNumber);

    cout << endl;

    cin.ignore();

    cout << "Enter Employees data below..." << endl;

    cout << "Name: ";
    getline(cin, employeeName);

    cout << "Age: ";
    cin >> employeeAge;

    cout << "Number: ";
    cin >> employeeNumber;

    // Create Employee object
    Biodata Employee(employeeName, employeeAge, employeeNumber);

    return 0;
}