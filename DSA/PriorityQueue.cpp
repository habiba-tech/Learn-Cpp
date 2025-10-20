#include <iostream>
using namespace std;

#define SIZE 5

struct Item {
    int data;
    int priority;
};

class PriorityQueue {
    Item items[SIZE];
    int count;

public:
    PriorityQueue() {
        count = 0;
    }

    void enqueue(int d, int p) {
        if (count == SIZE) {
            cout << "Queue is Full\n";
            return;
        }
        items[count].data = d;
        items[count].priority = p;
        count++;
        cout << "Inserted: " << d << " with priority " << p << endl;
    }

    void dequeue() {
        if (count == 0) {
            cout << "Queue is Empty\n";
            return;
        }

        // Find the element with highest priority (lowest priority number)
        int highestPriorityIndex = 0;
        for (int i = 1; i < count; i++) {
            if (items[i].priority < items[highestPriorityIndex].priority)
                highestPriorityIndex = i;
        }

        cout << "Deleted: " << items[highestPriorityIndex].data << endl;

        // Shift elements
        for (int i = highestPriorityIndex; i < count - 1; i++)
            items[i] = items[i + 1];
        count--;
    }

    void display() {
        if (count == 0) {
            cout << "Queue is Empty\n";
            return;
        }
        cout << "Elements in Priority Queue:\n";
        for (int i = 0; i < count; i++)
            cout << "Data: " << items[i].data << ", Priority: " << items[i].priority << endl;
    }
};

int main() {
    PriorityQueue pq;
    pq.enqueue(10, 3);
    pq.enqueue(20, 1);
    pq.enqueue(30, 2);
    pq.display();
    pq.dequeue();
    pq.display();
    return 0;
}
