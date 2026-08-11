/*
Create a C++ program that will compute the average of five numbers.
Create a private and public methods in your program to practice
encapsulation. Use get and set method.

Save as Activity4_01.cpp
*/

#include <iostream>
#include <iomanip>
using namespace std;

class Average {
private:
    double num1, num2, num3, num4, num5;

    // Private method
    double calculateAverage() {
        return (num1 + num2 + num3 + num4 + num5) / 5.0;
    }

public:
    // Setter methods
    void setNum1(double n) {
        num1 = n;
    }

    void setNum2(double n) {
        num2 = n;
    }

    void setNum3(double n) {
        num3 = n;
    }

    void setNum4(double n) {
        num4 = n;
    }

    void setNum5(double n) {
        num5 = n;
    }

    // Getter methods
    double getNum1() {
        return num1;
    }

    double getNum2() {
        return num2;
    }

    double getNum3() {
        return num3;
    }

    double getNum4() {
        return num4;
    }

    double getNum5() {
        return num5;
    }

    double getAverage() {
        return calculateAverage();
    }
};

int main() {
    Average ave;

    double n1, n2, n3, n4, n5;

    cout << "Enter five numbers:" << endl;

    cout << "Enter Number 1: ";
    cin >> n1;

    cout << "Enter Number 2: ";
    cin >> n2;

    cout << "Enter Number 3: ";
    cin >> n3;

    cout << "Enter Number 4: ";
    cin >> n4;

    cout << "Enter Number 5: ";
    cin >> n5;

    // Set the values
    ave.setNum1(n1);
    ave.setNum2(n2);
    ave.setNum3(n3);
    ave.setNum4(n4);
    ave.setNum5(n5);

    cout << fixed << setprecision(2);

    cout << endl;
    cout << "Numbers entered:" << endl;
    cout << ave.getNum1() << endl;
    cout << ave.getNum2() << endl;
    cout << ave.getNum3() << endl;
    cout << ave.getNum4() << endl;
    cout << ave.getNum5() << endl;

    cout << endl;
    cout << "Average: " << ave.getAverage() << endl;

    return 0;
}