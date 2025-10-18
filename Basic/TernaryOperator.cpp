#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    string result = (num >= 0) ? "Positive" : "Negative";
    cout << result;

    return 0;
}
