#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node** head, int newData) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newData;

    // Set the new node's next pointer to the current head
    newNode->next = *head;

    // Update the head to point to the new node
    *head = newNode;
}

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout<< current->data <<"->";
        current = current->next;
    }
    cout<<endl;
}

int main() {
    // Create an empty linked list
    Node* head = nullptr;

    // Add nodes at the beginning
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Print the linked list
    cout<< "Linked List: ";
    printList(head);

    return 0;
}
