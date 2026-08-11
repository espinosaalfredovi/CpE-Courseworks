/*
Design, Write, Compile and Run a C++ program that will generate a random number from 1 to
100 for a guessing game. The program will then allow the user to guess the random number and
tell if it is higher or lower. If the number is guessed the program will print the following.
8 – 10 tries (Good)
5 – 7 tries (Great)
2 – 4 tries (Awesome)
1 – try (future “Madam Auring”)
Save as Activity9.1.cpp.
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int randomNumber, guess;
    int tries = 0;

    srand(time(0));
    randomNumber = rand() % 100 + 1;

    cout << "GUESSING GAME" << endl;
    cout << "Guess a number from 1 to 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        tries++;

        if (guess < randomNumber) {
            cout << "Higher!" << endl;
        }
        else if (guess > randomNumber) {
            cout << "Lower!" << endl;
        }
        else {
            cout << endl;
            cout << "Correct! You guessed the number." << endl;
            cout << "Number of tries: " << tries << endl;

            if (tries >= 8 && tries <= 10) {
                cout << "Good" << endl;
            }
            else if (tries >= 5 && tries <= 7) {
                cout << "Great" << endl;
            }
            else if (tries >= 2 && tries <= 4) {
                cout << "Awesome" << endl;
            }
            else if (tries == 1) {
                cout << "Future Madam Auring" << endl;
            }
            else {
                cout << "Keep practicing!" << endl;
            }
        }

    } while (guess != randomNumber);

    return 0;
}