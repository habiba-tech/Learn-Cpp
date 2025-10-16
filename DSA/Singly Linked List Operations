#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // 1️⃣ Insertion at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    // 2️⃣ Insertion at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // 3️⃣ Insertion after a specific node
    void insertAfter(int key, int value) {
        Node* temp = head;
        while (temp != NULL && temp->data != key) {
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Node not found!\n";
            return;
        }
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = temp->next;
        temp->next = newNode;
    }

    // 4️⃣ Deletion of a node
    void deleteNode(int key) {
        Node* temp = head;
        Node* prev = NULL;

        if (temp != NULL && temp->data == key) {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Node not found!\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    // 5️⃣ Display the list
    void display() {
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    LinkedList list;

    // Insertion
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.display();

    list.insertAtBeginning(5);
    list.display();

    list.insertAfter(20, 25);
    list.display();

    // Deletion
    list.deleteNode(10);
    list.display();

    return 0;
}
