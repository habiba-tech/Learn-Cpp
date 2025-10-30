#include <iostream>
#include <string>
#include <ctime>
using namespace std;

void waitFor(int seconds) {
    time_t start = time(0);
    while (difftime(time(0), start) < seconds);
}

int main() {
    string name;
    int score = 0;
    char ans;
    int level;

    cout << "Welcome to the Ultimate Quiz Battle! \n";
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "\nHello, " << name << "! Choose your battle level:\n";
    cout << " Easy\n Medium\n Hard\n";
    cout << "Enter your choice: ";
    cin >> level;

    cout << "\nEach question gives +10 points. You have 8 seconds to answer each!\n";
    cout << "Ready... Set... Fight! \n\n";

    // -------- EASY LEVEL --------
    if (level == 1) {
        cout << "Q1. What is 2 + 3?\n";
        cout << "a) 4\nb) 5\nc) 6\nd) 3\n";
        cout << "Answer: ";
        time_t start = time(0);
        cin >> ans;
        if (difftime(time(0), start) > 8) {
            cout << " Time's up! No points.\n";
        } else if (ans == 'b' || ans == 'B') {
            cout << " Correct!\n"; score += 10;
        } else cout << " Wrong! Answer: 5\n";

        cout << "\nQ2. What color is the sky?\n";
        cout << "a) Green\nb) Red\nc) Blue\nd) Yellow\n";
        cout << "Answer: ";
        start = time(0);
        cin >> ans;
        if (difftime(time(0), start) > 8) {
            cout << " Time's up!\n";
        } else if (ans == 'c' || ans == 'C') {
            cout << "Correct!\n"; score += 10;
        } else cout << " Wrong! Answer: Blue\n";
    }

    // -------- MEDIUM LEVEL --------
    else if (level == 2) {
        cout << "Q1. Which data structure uses FIFO order?\n";
        cout << "a) Stack\nb) Queue\nc) Tree\nd) Graph\n";
        cout << "Answer: ";
        time_t start = time(0);
        cin >> ans;
        if (difftime(time(0), start) > 8) {
            cout << "⏰ Time's up!\n";
        } else if (ans == 'b' || ans == 'B') {
            cout << "✅ Correct!\n"; score += 10;
        } else cout << "❌ Wrong! Answer: Queue\n";

        cout << "\nQ2. What is the size of int in C++ (typically)?\n";
        cout << "a) 2 bytes\nb) 4 bytes\nc) 8 bytes\nd) 1 byte\n";
        cout << "Answer: ";
        start = time(0);
        cin >> ans;
        if (difftime(time(0), start) > 8) {
            cout << " Time's up!\n";
        } else if (ans == 'b' || ans == 'B') {
            cout << " Correct!\n"; score += 10;
        } else cout << " Wrong! Answer: 4 bytes\n";
    }

    // -------- HARD LEVEL --------
    else if (level == 3) {
        cout << "Q1. Which sorting algorithm has O(n log n) complexity?\n";
        cout << "a) Bubble Sort\nb) Merge Sort\nc) Insertion Sort\nd) Selection Sort\n";
        cout << "Answer: ";
        time_t start = time(0);
        cin >> ans;
        if (difftime(time(0), start) > 8) {
            cout << " Time's up!\n";
        } else if (ans == 'b' || ans == 'B') {
            cout << " Correct!\n"; score += 10;
        } else cout << " Wrong! Answer: Merge Sort\n";

        cout << "\nQ2. Which of the following is not an OOP principle?\n";
        cout << "a) Inheritance\nb) Polymorphism\nc) Encapsulation\nd) Compilation\n";
        cout << "Answer: ";
        start = time(0);
        cin >> ans;
        if (difftime(time(0), start) > 8) {
            cout << " Time's up!\n";
        } else if (ans == 'd' || ans == 'D') {
            cout << " Correct!\n"; score += 10;
        } else cout << " Wrong! Answer: Compilation\n";
    }

    // -------- RESULT --------
    cout << "\n Battle Over, " << name << "!\n";
    cout << "Your Final Score: " << score << " / 20\n";

    if (score >= 15)
        cout << " You are a True Knowledge Warrior! \n";
    else if (score >= 10)
        cout << "You fought well! Keep improving.\n";
    else
        cout << " Defeated this time. Come back stronger!\n";

    return 0;
}
