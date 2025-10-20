#include <iostream>
using namespace std;

#define SIZE 5  // Size of the queue

class Queue {
    int items[SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    // Enqueue operation
    void enqueue(int element) {
        if (rear == SIZE - 1) {
            cout << "Queue is Full\n";
            return;
        }
        if (front == -1) front = 0;
        items[++rear] = element;
        cout << "Inserted: " << element << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Deleted: " << items[front++] << endl;
        if (front > rear) front = rear = -1; // Reset queue
    }

    // Display all elements
    void display() {
        if (front == -1)
            cout << "Queue is Empty\n";
        else {
            cout << "Queue elements are: ";
            for (int i = front; i <= rear; i++)
                cout << items[i] << " ";
            cout << endl;
        }
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}
