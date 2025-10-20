#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    // 1️⃣ Insert at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = head;

        if (head != NULL)
            head->prev = newNode;

        head = newNode;
    }

    // 2️⃣ Insert at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            newNode->prev = NULL;
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
        newNode->prev = temp;
    }

    // 3️⃣ Delete a node
    void deleteNode(int value) {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }

        Node* temp = head;

        // If first node needs to be deleted
        if (temp->data == value) {
            head = temp->next;
            if (head != NULL)
                head->prev = NULL;
            delete temp;
            return;
        }

        // Otherwise search for the node
        while (temp != NULL && temp->data != value)
            temp = temp->next;

        if (temp == NULL) {
            cout << "Node not found!\n";
            return;
        }

        // Unlink the node
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
        if (temp->prev != NULL)
            temp->prev->next = temp->next;

        delete temp;
    }

    // 4️⃣ Display list forward
    void displayForward() {
        Node* temp = head;
        cout << "Forward: ";
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    // 5️⃣ Display list backward
    void displayBackward() {
        if (head == NULL) {
            cout << "List is empty!\n";
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next; // move to last node

        cout << "Backward: ";
        while (temp != NULL) {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL\n";
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertAtEnd(10);
    dll.insertAtEnd(20);
    dll.insertAtEnd(30);
    dll.displayForward();

    dll.insertAtBeginning(5);
    dll.displayForward();

    dll.deleteNode(20);
    dll.displayForward();

    dll.displayBackward();

    return 0;
}
