#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    };


//print function
void printf(Node* head){
    Node* temp = head;  

    while(temp!=NULL){
        cout <<temp->data<<endl;
        temp= temp->next;
    }
}

void reversethelist(Node* &head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL){
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    head = prev;
}

    int main(){
    Node * node1 = new Node(10);
    Node * node2 = new Node(20);
    Node * node3 = new Node(30);
    Node * node4 = new Node(40);

    Node * head = node1;
    
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    
    cout<<"Before reversing the list: "<<endl;
    printf(head);

    cout<<"After reversing the list: "<<endl;
    reversethelist(head);
    printf(head);
     
    return 0;
    }

