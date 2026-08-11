/*
2. Reprogram the code in sample1.03 wherein the program will ask the user
   to enter the value of length, width and breadth of the Box1 and Box2.
   The program will then compare the volume and determine which box has
   the greater volume.

   Save as Activity1_02.cpp
*/

#include <iostream>
using namespace std;

class Box {
public:
    double length;
    double width;
    double breadth;

    double getVolume() {
        return length * width * breadth;
    }
};

int main() {
    Box Box1, Box2;

    double volume1, volume2;

    cout << "Enter the length of Box1: ";
    cin >> Box1.length;

    cout << "Enter the width of Box1: ";
    cin >> Box1.width;

    cout << "Enter the breadth of Box1: ";
    cin >> Box1.breadth;

    cout << endl;

    cout << "Enter the length of Box2: ";
    cin >> Box2.length;

    cout << "Enter the width of Box2: ";
    cin >> Box2.width;

    cout << "Enter the breadth of Box2: ";
    cin >> Box2.breadth;

    volume1 = Box1.getVolume();
    volume2 = Box2.getVolume();

    cout << endl;
    cout << "Volume of Box1: " << volume1 << endl;
    cout << "Volume of Box2: " << volume2 << endl;

    if (volume1 > volume2) {
        cout << "Box1 has the greater volume." << endl;
    }
    else if (volume2 > volume1) {
        cout << "Box2 has the greater volume." << endl;
    }
    else {
        cout << "Box1 and Box2 have equal volumes." << endl;
    }

    return 0;
}