#include <iostream>
using namespace std;

int main() {
    string choices[] = {"rock", "paper", "scissors"};
    srand(time(0));

    string user;
    cout << "Enter rock, paper or scissors: ";
    cin >> user;

    string computer = choices[rand() % 3];
    cout << "Computer chose: " << computer << endl;

    if (user == computer)
        cout << "It's a tie!\n";
    else if ((user == "rock" && computer == "scissors") ||
             (user == "paper" && computer == "rock") ||
             (user == "scissors" && computer == "paper"))
        cout << "🎉 You win!\n";
    else
        cout << "😢 You lose!\n";

    return 0;
}
