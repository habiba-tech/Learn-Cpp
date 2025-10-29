#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number, guess, tries;
    int score = 0;
    char choice;
    int maxRange;

    cout << "🎮 Welcome to the Number Guessing Game!\n";
    cout << "You’ll earn points based on how quickly you guess the number.\n\n";

    do {
        cout << "Choose difficulty level:\n";
        cout << "1. Easy (1 - 10)\n";
        cout << "2. Medium (1 - 50)\n";
        cout << "3. Hard (1 - 100)\n";
        cout << "Enter your choice: ";
        int level;
        cin >> level;

        switch (level) {
            case 1: maxRange = 10; break;
            case 2: maxRange = 50; break;
            case 3: maxRange = 100; break;
            default: maxRange = 10;
        }

        number = rand() % maxRange + 1;
        tries = 0;
        guess = 0;

        cout << "\nI've picked a number between 1 and " << maxRange << ". Try to guess it!\n";

        while (guess != number) {
            cout << "Enter your guess: ";
            cin >> guess;
            tries++;

            if (guess > number)
                cout << "Too high! 📈\n";
            else if (guess < number)
                cout << "Too low! 📉\n";
            else {
                cout << "🎉 Correct! You guessed the number in " << tries << " tries.\n";
                if (tries <= 3) score += 20;
                else if (tries <= 6) score += 10;
                else score += 5;
            }
        }

        cout << "⭐ Your current score: " << score << "\n";
        cout << "Do you want to play again? (y/n): ";
        cin >> choice;
        cout << "\n----------------------------------\n";

    } while (choice == 'y' || choice == 'Y');

    cout << "\n🏁 Final Score: " << score << "\nThanks for playing! 🎮\n";
    return 0;
}
