#include <iostream>
using namespace std;

// Define a node
struct Node {
    int data;
    Node* next;
};

// Function to print the list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

// Function to insert a node at the beginning
void insertAtHead(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

int main() {
    Node* head = nullptr; // Initialize an empty list

    // Insert elements
    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);

    // Print the list
    cout << "Linked List: ";
    printList(head);

    return 0;
}
