#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int randomNumber, guess;

    srand(time(0));
    randomNumber = rand() % 100 + 1;

    cout << "***** Number Guessing Game *****" << endl;
    cout << "Guess the number between 1 and 100" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too High! Try again." << endl;
        }
        else if (guess < randomNumber) {
            cout << "Too Low! Try again." << endl;
        }
        else {
            cout << "Correct! You guessed the number." << endl;
            break;
        }
    }

    return 0;
}