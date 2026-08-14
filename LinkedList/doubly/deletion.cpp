#include <iostream>
using namespace std;

class Node{
public: 
int data;
Node* next;
Node* prev;

// Constructor
Node(int data){
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
}
};

int getlength(Node* head){
Node* temp = head;

int len = 0;

while(temp != NULL){
    len++;
    temp = temp -> next;
}
return len;
}

//print function
void printf(Node* head){
Node* temp = head;

while(temp!=NULL){
    cout <<temp->data<<endl;
    temp= temp->next;
}
cout<<endl;
}

//delete head
void deletehead(Node* &head){
    Node* temp = head;

    head =head -> next;
    head -> prev =NULL;
    delete temp;

}

//delete tail
void deletetail(Node* &tail){
Node* temp = tail;
tail = tail -> prev;
tail -> next = NULL;
delete temp;

}

//delete at any position
void deleteatanyposition(Node* &head, Node* &tail, int position){
    //delete at head
if(position == 1){
    deletehead(head);
    return;
}

//delete at tail
if(position == getlength(head)){
    deletetail(tail);
    return;
}

//delete at any position
Node* curr = head;
Node* prev = NULL;
int cnt = 1;

while(cnt < position){
    prev = curr;
    curr = curr-> next;
    cnt++;
}

prev -> next = curr -> next;
curr -> next -> prev = prev;
curr -> next = NULL;
curr -> prev = NULL;
delete curr;    


}
int main(){
Node* node1 = new Node(10);
Node* node2 = new Node(20);
Node* node3 = new Node(30);
Node* node4 = new Node(40);
Node* node5 = new Node(50);
Node* node6 = new Node(60);



node1 -> next = node2;
node2-> prev = node1;
node2 -> next = node3;

node3 -> prev = node2;
node3 -> next = node4;

node4 -> prev = node3;
node4 -> next = node5;
node5 -> prev = node4;
node5 -> next = node6;
node6 -> prev = node5;

Node* head = node1;
Node* tail = node6;

cout << "Original list: ";
printf(head);

deletehead(head);
cout << "after head is deleted: ";
printf(head);

deletetail(tail);
cout << "after tail is deleted: ";
printf(head);

deleteatanyposition(head, tail, 2);
cout << "after node at position 2 is deleted: ";
printf(head);

return 0;
}