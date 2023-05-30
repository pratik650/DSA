
#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int count=0;
class Node {
public:
    int data;
    Node* next;
};

void push(Node* &head,int ndata){
Node * new_node = new Node();

new_node->data = ndata;
new_node->next =head;
head = new_node;

}

int trackSize(Node * &head){
   if (head == NULL) {
        return 0;
    }
    // Count this node plus the rest of the list
    else {
        cout<<head->data<<"->";
        return 1 + trackSize(head->next);
       
    }
};

int main (){

    Node* head = NULL;
 int count=0;
    push(head, 1);
    push(head, 3);
    push(head, 1);
    push(head, 2);
    push(head, 1);
    cout<<"Size of the linked list would be "<<trackSize(head);

return 0;
}