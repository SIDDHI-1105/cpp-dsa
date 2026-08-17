#include<iostream>
using namespace std;

class Node
{
public:
    int data;   
    Node* next;

    //constructor
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void printList(Node* head)
{
    while(head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node* reverseList(Node* &head){
    if(head == NULL || head->next == NULL) {
        return head;
    }
Node* reversedhead =  reverseList(head->next);

head->next->next = head;
head -> next = NULL;
return reversedhead;
}
int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);       
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    cout<<"Original List: ";
    printList(head);
    head = reverseList(head);
    cout<<"\nReversed List: ";
    printList(head);
    return 0;
}