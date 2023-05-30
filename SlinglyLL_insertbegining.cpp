#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node *head = new Node(); // Create a new Node object
    head->data = 10;         // Assign the value 10 to the data member of the head node
    head->next = nullptr;    // Set the next pointer to null
}