#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* last; // Points to the last node

public:
    CircularLinkedList() {
        last = NULL;
    }

    // 1️⃣ Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;

        if (last == NULL) {
            last = newNode;
            last->next = last; // circular link
        } else {
            newNode->next = last->next;
            last->next = newNode;
        }
    }

    // 2️⃣ Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;

        if (last == NULL) {
            last = newNode;
            last->next = last;
        } else {
            newNode->next = last->next;
            last->next = newNode;
            last = newNode;
        }
    }

    // 3️⃣ Delete a node
    void deleteNode(int key) {
        if (last == NULL) {
            cout << "List is empty!\n";
            return;
        }

        Node *curr = last->next, *prev = last;

        // If only one node
        if (curr == last && curr->data == key) {
            delete curr;
            last = NULL;
            return;
        }

        // If key is in the first node
        if (curr->data == key) {
            prev->next = curr->next;
            delete curr;
            return;
        }

        // Search for key
        do {
            prev = curr;
            curr = curr->next;
        } while (curr != last->next && curr->data != key);

        if (curr == last->next) {
            cout << "Node not found!\n";
            return;
        }

        prev->next = curr->next;

        if (curr == last)
            last = prev;

        delete curr;
    }

    // 4️⃣ Display list
    void display() {
        if (last == NULL) {
            cout << "List is empty!\n";
            return;
        }

        Node* temp = last->next;
        cout << "Circular Linked List: ";
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != last->next);
        cout << "(Back to head)\n";
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertAtEnd(10);
    cll.insertAtEnd(20);
    cll.insertAtEnd(30);
    cll.display();

    cll.insertAtBeginning(5);
    cll.display();

    cll.deleteNode(20);
    cll.display();

    cll.deleteNode(5);
    cll.display();

    return 0;
}
