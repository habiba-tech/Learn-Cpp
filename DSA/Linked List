#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Create 3 nodes
    Node *head, *second, *third;

    // Allocate memory dynamically
    head = new Node;
    second = new Node;
    third = new Node;

    // Assign data
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;  // End of list

    // Traversal
    Node* temp = head;
    cout << "Linked List Elements: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
