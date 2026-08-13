#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
// constructor
    Node(int data){
        this -> data = data;
        this -> next =NULL;
    }
    // destructor
    ~Node(){
        int value = this -> data;
        // memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};
    void deleteNode(Node* &head,int position){
    // delete first node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        // memory free start node
        temp -> next = NULL;
        delete temp;
    }
else{
    // delete any middle node or last node
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while(cnt <= position){
        prev = curr;
        curr = curr -> next;
        cnt++;
}
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
}
}
void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    cout << node1 -> data << endl;
    deleteNode(head, 1);
    print(head);
    return 0;
}