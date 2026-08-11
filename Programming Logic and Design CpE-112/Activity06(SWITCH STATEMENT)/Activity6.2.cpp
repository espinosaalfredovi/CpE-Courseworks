/*
Using Switch statement, write a program that displays the following menu for the food items
available to take order from the customer: Save as Activity6.2.cpp
• B= Burger
• F= French Fries
• P= Pizza
• S= Sandwiches
The program inputs the type of food and quantity. It finally displays the total charges for the order
according to following criteria:
• Burger = Php 200
• French Fries= Php 50
• Pizza= Php 500
• Sandwiches= Php 150
*/
#include <iostream>
using namespace std;

int main() {
    char food;
    int quantity;
    double total = 0;

    cout << "FOOD MENU" << endl;
    cout << "B = Burger       - Php 200" << endl;
    cout << "F = French Fries - Php 50" << endl;
    cout << "P = Pizza        - Php 500" << endl;
    cout << "S = Sandwiches   - Php 150" << endl;

    cout << "\nEnter food choice: ";
    cin >> food;

    cout << "Enter quantity: ";
    cin >> quantity;

    switch (food) {
        case 'B':
        case 'b':
            total = 200 * quantity;
            cout << "Food: Burger" << endl;
            break;

        case 'F':
        case 'f':
            total = 50 * quantity;
            cout << "Food: French Fries" << endl;
            break;

        case 'P':
        case 'p':
            total = 500 * quantity;
            cout << "Food: Pizza" << endl;
            break;

        case 'S':
        case 's':
            total = 150 * quantity;
            cout << "Food: Sandwiches" << endl;
            break;

        default:
            cout << "Invalid food choice!" << endl;
            return 0;
    }

    cout << "Quantity: " << quantity << endl;
    cout << "Total Charges: Php " << total << endl;

    return 0;
}