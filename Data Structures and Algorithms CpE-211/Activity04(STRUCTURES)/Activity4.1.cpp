/*
ACTIVITY 4.1

Create a C++ program that will collect information about a student
(Name, Address, Date of Birth, Program/Course and Age).

Use structure in creating your program.
Display the data given by the student.
*/

#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    string address;
    string dateOfBirth;
    string course;
    int age;
};

int main()
{
    Student student;

    cout << "STUDENT INFORMATION SYSTEM" << endl;
    cout << endl;

    cout << "Enter Name          : ";
    getline(cin, student.name);

    cout << "Enter Address       : ";
    getline(cin, student.address);

    cout << "Enter Date of Birth : ";
    getline(cin, student.dateOfBirth);

    cout << "Enter Program/Course: ";
    getline(cin, student.course);

    cout << "Enter Age           : ";
    cin >> student.age;

    cout << endl;
    cout << "STUDENT INFORMATION" << endl;
    cout << endl;

    cout << "Name           : " << student.name << endl;
    cout << "Address        : " << student.address << endl;
    cout << "Date of Birth  : " << student.dateOfBirth << endl;
    cout << "Program/Course : " << student.course << endl;
    cout << "Age            : " << student.age << endl;

    return 0;
}