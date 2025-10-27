#include <iostream>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    cout << "Guess the number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number)
            cout << "Too high! Try again.\n";
        else if (guess < number)
            cout << "Too low! Try again.\n";
        else
            cout << "Correct! You guessed it!\n";

    } while (guess != number);

    return 0;
}
