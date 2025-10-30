#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int SIZE = 4;   // 4 cards total (2 pairs)
    char cards[SIZE] = {'A', 'A', 'B', 'B'};
    char hidden[SIZE] = {'*', '*', '*', '*'};
    int choice1, choice2;
    int matches = 0;
    srand(time(0));

    // Shuffle cards randomly
    for (int i = 0; i < SIZE; i++) {
        int j = rand() % SIZE;
        swap(cards[i], cards[j]);
    }

    cout << "MEMORY MATCH GAME \n";
    cout << "Find all pairs to win!\n\n";

    while (matches < SIZE / 2) {
        cout << "Cards: ";
        for (int i = 0; i < SIZE; i++) {
            cout << hidden[i] << " ";
        }
        cout << "\nChoose two cards (0–" << SIZE - 1 << "): ";
        cin >> choice1 >> choice2;

        // Show selected cards
        cout << "\nYou flipped: " << cards[choice1] << " and " << cards[choice2] << endl;

        if (cards[choice1] == cards[choice2] && choice1 != choice2) {
            cout << "✅ Match found!\n";
            hidden[choice1] = cards[choice1];
            hidden[choice2] = cards[choice2];
            matches++;
        } else {
            cout << " No match. Try again!\n";
        }

        cout << "-----------------------------\n";
    }

    cout << "\n🎉 You found all pairs! You Win! 🏆\n";

    return 0;
}
