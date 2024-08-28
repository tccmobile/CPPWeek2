#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void whileLoop() {
    cout << "\nWhile Loop:" << endl;
    int number = rand() % 10 + 1;
    int guess = 0;
    int attempts = 0;

    while (guess != number) {
        cout << "Guess a number between 1 and 10: ";
        cin >> guess;
        attempts++;
        if (guess != number) {
            cout << "Wrong guess, try again!" << endl;
        }
    }

    cout << "Correct! You guessed the number in " << attempts << " attempts." << endl;
}

void doWhileLoop() {
    cout << "\nDo-While Loop:" << endl;
    int number = rand() % 10 + 1;
    int guess;
    int attempts = 0;

    do {
        cout << "Guess a number between 1 and 10: ";
        cin >> guess;
        attempts++;
        if (guess != number) {
            cout << "Wrong guess, try again!" << endl;
        }
    } while (guess != number);

    cout << "Correct! You guessed the number in " << attempts << " attempts." << endl;
}

int main() {
    srand(time(0)); // Seed the random number generator

    cout << "This program demonstrates the difference between while and do-while loops." << endl;
    cout << "We'll use a number guessing game for both examples." << endl;

    whileLoop();
    doWhileLoop();

    cout << "\nKey differences:" << endl;
    cout << "1. The while loop checks the condition before executing the loop body." << endl;
    cout << "2. The do-while loop always executes the loop body at least once before checking the condition." << endl;

    return 0;
}