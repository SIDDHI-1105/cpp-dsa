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
int reverselist(Node* &head){
    Node
}

int main()
{
Node* head = new Node(1);
head->next = new Node(2);
head->next->next = new Node(3);



    return 0;
}