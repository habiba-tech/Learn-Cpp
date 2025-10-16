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
