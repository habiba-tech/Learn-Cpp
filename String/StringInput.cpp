#include <iostream>
#include <string>
using namespace std;

int main() {
    string city;
    cout << "Enter your city: ";
    getline(cin, city);   // allows spaces
    cout << "You live in: " << city;
    return 0;
}
