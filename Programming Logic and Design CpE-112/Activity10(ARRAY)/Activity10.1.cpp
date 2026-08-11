/*
Write a C++ program to reverse the characters of the given word.
Use array in constructing your codes.
Limit your input up to 30 characters.

Save as Activity10.1.cpp
*/

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char word[31];

    cout << "Enter a word: ";
    cin >> word;

    int length = strlen(word);

    cout << "Reversed word: ";

    for (int i = length - 1; i >= 0; i--) {
        cout << word[i];
    }

    cout << endl;

    return 0;
}