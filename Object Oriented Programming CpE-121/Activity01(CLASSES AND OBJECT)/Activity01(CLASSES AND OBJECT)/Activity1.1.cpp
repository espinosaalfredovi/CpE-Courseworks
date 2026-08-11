/*
1. Create a C++ program with classes named Fruits and Vegetables.
   The program has functions/methods named:

   For Fruits:
   Apple  - print "The apple is red"
   Orange - print "The oranges are riped"
   Mango  - print "The Mango is delicious"

   For Vegetables:
   Tomatoes - print "The tomatoes are red"
   Union    - print "The unions are tasty"
   Garlic   - print "The garlics are white"

   The program will display the corresponding output when a
   fruit or vegetable method is called.
*/

#include <iostream>
using namespace std;

class Fruits {
public:
    void Apple() {
        cout << "The apple is red" << endl;
    }

    void Orange() {
        cout << "The oranges are riped" << endl;
    }

    void Mango() {
        cout << "The Mango is delicious" << endl;
    }
};

class Vegetables {
public:
    void Tomatoes() {
        cout << "The tomatoes are red" << endl;
    }

    void Union() {
        cout << "The unions are tasty" << endl;
    }

    void Garlic() {
        cout << "The garlics are white" << endl;
    }
};

int main() {
    Fruits fruit;
    Vegetables vegetable;

    fruit.Apple();
    fruit.Orange();
    fruit.Mango();

    vegetable.Tomatoes();
    vegetable.Union();
    vegetable.Garlic();

    return 0;
}