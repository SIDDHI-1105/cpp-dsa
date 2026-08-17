#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next; 
    Node* prev;
};

void printList(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node* reverseList(Node* &head)
{
Node* current = head;
Node* newhead = NULL;

while(current != NULL){
    Node* temp = current->next;
    current ->next = current->prev;
    current->prev = temp;

    newhead = current;

    current = current->prev;

}
head = newhead;
    return head;
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();

    head->data = 1;
    head->next = second;
    head->prev = NULL;

    second->data = 2;
    second->next = third;
    second->prev = head;

    third->data = 3;
    third->next = fourth;
    third->prev = second;

    fourth->data = 4;
    fourth->next = fifth;
    fourth->prev = third;

    fifth->data = 5;
    fifth->next = NULL;
    fifth->prev = fourth;

    cout<<"Original List: ";
    printList(head);

    cout<<endl;
    
    reverseList(head);

    cout<<"Reversed List: ";
    printList(head);

    return 0;
}