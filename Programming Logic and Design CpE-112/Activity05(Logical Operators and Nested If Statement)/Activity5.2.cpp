/*
Write a C++ program that will ask the user amount of 5 items then compute for the total amount.
If total amount is greater than or equal 10 000 – 20% discount
If total amount is greater than or equal 5 000 but less than 10 000 – 15% discount
If total amount is greater than 1 000 but less than 5 000 – 10% discount
Otherwise it will display the total amount without discount.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double item1, item2, item3, item4, item5;
    double total, discount = 0, finalAmount;

    cout << "Enter amount of Item 1: ";
    cin >> item1;

    cout << "Enter amount of Item 2: ";
    cin >> item2;

    cout << "Enter amount of Item 3: ";
    cin >> item3;

    cout << "Enter amount of Item 4: ";
    cin >> item4;

    cout << "Enter amount of Item 5: ";
    cin >> item5;

    total = item1 + item2 + item3 + item4 + item5;

    if (total >= 10000) {
        discount = total * 0.20;
    }
    else if (total >= 5000) {
        discount = total * 0.15;
    }
    else if (total > 1000) {
        discount = total * 0.10;
    }
    else {
        discount = 0;
    }

    finalAmount = total - discount;

    cout << fixed << setprecision(2);

    cout << "\nTotal Amount: " << total << endl;

    if (discount > 0) {
        cout << "Discount: " << discount << endl;
        cout << "Amount to Pay: " << finalAmount << endl;
    }
    else {
        cout << "No Discount" << endl;
        cout << "Amount to Pay: " << total << endl;
    }

    return 0;
}
