#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    string words[] = {"apple", "banana", "orange", "grapes", "mango", "cherry", "papaya"};
    string hints[] = {
        "A red or green fruit used in pies 🍏",
        "A long yellow fruit 🍌",
        "A citrus fruit rich in Vitamin C 🍊",
        "A small purple or green fruit 🍇",
        "A tropical fruit loved in summer 🥭",
        "A small red fruit often used on cakes 🍒",
        "A soft tropical fruit with orange color 🧡"
    };

    srand(time(0));
    int score = 0;
    char playAgain;

    cout << "🎮 Welcome to the Advanced Word Guessing Game!\n";
    cout << "You have 6 wrong tries for each word.\n";
    cout << "Each correct word = +10 points 🏅\n\n";

    do {
        int index = rand() % 7;
        string word = words[index];
        string hint = hints[index];
        string hidden(word.length(), '_');
        int tries = 6;
        char guess;
        bool correct;

        cout << "💡 Hint: " << hint << "\n";

        while (tries > 0 && hidden != word) {
            cout << "\nWord: " << hidden << "\n";
            cout << "Guess a letter: ";
            cin >> guess;
            correct = false;

            for (int i = 0; i < word.length(); i++) {
                if (word[i] == guess && hidden[i] == '_') {
                    hidden[i] = guess;
                    correct = true;
                }
            }

            if (correct)
                cout << "✅ Good job! You found a letter.\n";
            else {
                tries--;
                cout << "❌ Wrong guess! Tries left: " << tries << "\n";
            }
        }

        if (hidden == word) {
            cout << "\n🎉 Congratulations! You guessed the word: " << word << "\n";
            score += 10;
        } else {
            cout << "\n💀 Game Over! The correct word was: " << word << "\n";
        }

        cout << "\nYour current score: " << score << " points\n";
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
        cout << "\n--------------------------------------\n";

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "\n🏁 Final Score: " << score << " points\n";
    cout << "Thanks for playing! 👋\n";

    return 0;
}
