/*
Create a C++ program with a Parent class (Formula).

Class (Formula) has attributes named (Base and Height).
Inside the function/method, the program will ask the user
to enter the height and base of an object.

Create another class named Rectangle and Triangle that
will inherit the class Formula.

Rectangle class will have a function that will compute
for the area of the rectangle and Triangle class will
have a function that will compute for the area of the triangle.

Lastly, the program will display the Area of the Triangle
and Rectangle with the given value.

Save as Activity5.01.cpp
*/

#include <iostream>
using namespace std;

// Parent Class
class Formula {
protected:
    double Base;
    double Height;

public:
    void getData() {
        cout << "Enter Base: ";
        cin >> Base;

        cout << "Enter Height: ";
        cin >> Height;
    }
};

// Child Class Rectangle
class Rectangle : public Formula {
public:
    double areaRectangle() {
        return Base * Height;
    }
};

// Child Class Triangle
class Triangle : public Formula {
public:
    double areaTriangle() {
        return (Base * Height) / 2;
    }
};

int main() {

    Rectangle rectangle;
    Triangle triangle;

    cout << "RECTANGLE" << endl;
    rectangle.getData();

    cout << endl;

    cout << "TRIANGLE" << endl;
    triangle.getData();

    cout << endl;
    cout << "----- RESULTS -----" << endl;

    cout << "Area of Rectangle: "
         << rectangle.areaRectangle() << endl;

    cout << "Area of Triangle: "
         << triangle.areaTriangle() << endl;

    return 0;
}