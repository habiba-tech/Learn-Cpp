#include <iostream>
using namespace std;

#define MAX 5  // maximum size of stack

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;  // empty stack
    }

    // 1️⃣ Push operation
    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow! Cannot push " << x << endl;
        } else {
            top++;
            arr[top] = x;
            cout << x << " pushed into stack.\n";
        }
    }

    // 2️⃣ Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow! Nothing to pop.\n";
        } else {
            cout << arr[top] << " popped from stack.\n";
            top--;
        }
    }

    // 3️⃣ Peek (top element)
    void peek() {
        if (top == -1)
            cout << "Stack is empty.\n";
        else
            cout << "Top element: " << arr[top] << endl;
    }

    // 4️⃣ Check if empty
    bool isEmpty() {
        return top == -1;
    }

    // 5️⃣ Display stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

    s.peek();

    s.pop();
    s.display();

    return 0;
}
