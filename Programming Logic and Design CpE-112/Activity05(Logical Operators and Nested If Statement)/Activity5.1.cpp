/*
Write a C++ program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer.
Calculate percentage and grade according to following:
Percentage = 90% - 100% : Grade A
Percentage = 80% - 89% : Grade B
Percentage = 70% - 79% : Grade C
Percentage = 60% - 69%: Grade D
Percentage = 50% - 59% : Grade E
Percentage <= 49% : Grade F
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double physics, chemistry, biology, mathematics, computer;
    double total, percentage;
    char grade;

    cout << "Enter Physics mark: ";
    cin >> physics;

    cout << "Enter Chemistry mark: ";
    cin >> chemistry;

    cout << "Enter Biology mark: ";
    cin >> biology;

    cout << "Enter Mathematics mark: ";
    cin >> mathematics;

    cout << "Enter Computer mark: ";
    cin >> computer;

    total = physics + chemistry + biology + mathematics + computer;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 50)
        grade = 'E';
    else
        grade = 'F';

    cout << fixed << setprecision(2);

    cout << "\nTotal Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}