#include <iostream>
using namespace std;

// Structure for a term in polynomial
struct Term {
    int coeff;  // coefficient
    int exp;    // exponent
};

// Class for Polynomial
class Polynomial {
private:
    Term *terms;  // array of terms
    int num;      // number of terms

public:
    // Constructor
    Polynomial(int n) {
        num = n;
        terms = new Term[num];
    }

    // Function to input polynomial
    void input() {
        cout << "Enter each term in decreasing order of exponent:\n";
        for (int i = 0; i < num; i++) {
            cout << "Term " << i + 1 << " (coeff exp): ";
            cin >> terms[i].coeff >> terms[i].exp;
        }
    }

    // Function to display polynomial
    void display() {
        for (int i = 0; i < num; i++) {
            cout << terms[i].coeff << "x^" << terms[i].exp;
            if (i < num - 1)
                cout << " + ";
        }
        cout << endl;
    }

    // Function to add two polynomials
    Polynomial add(Polynomial p2) {
        int i = 0, j = 0, k = 0;
        Polynomial sum(num + p2.num); // maximum possible terms

        while (i < num && j < p2.num) {
            if (terms[i].exp > p2.terms[j].exp)
                sum.terms[k++] = terms[i++];
            else if (terms[i].exp < p2.terms[j].exp)
                sum.terms[k++] = p2.terms[j++];
            else {
                sum.terms[k].exp = terms[i].exp;
                sum.terms[k++].coeff = terms[i++].coeff + p2.terms[j++].coeff;
            }
        }

        // Copy remaining terms
        for (; i < num; i++)
            sum.terms[k++] = terms[i];
        for (; j < p2.num; j++)
            sum.terms[k++] = p2.terms[j];

        sum.num = k;
        return sum;
    }

    // Destructor
    ~Polynomial() {
        delete[] terms;
    }
};

// Main function
int main() {
    int n1, n2;

    cout << "Enter number of terms in first polynomial: ";
    cin >> n1;
    Polynomial p1(n1);
    p1.input();

    cout << "\nEnter number of terms in second polynomial: ";
    cin >> n2;
    Polynomial p2(n2);
    p2.input();

    cout << "\nFirst Polynomial: ";
    p1.display();

    cout << "Second Polynomial: ";
    p2.display();

    Polynomial sum = p1.add(p2);

    cout << "\nSum of Polynomials: ";
    sum.display();

    return 0;
}
