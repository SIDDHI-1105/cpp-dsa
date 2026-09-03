#include <iostream>
using namespace std;

class Queue{

    class Node{
        public:
        int data;
        Node* next;

Node(int x){
    data = x;
    next = NULL;

    }
};

public:
Node* front;
Node* rare;

Queue(){
    front = NULL;
    rare = NULL;
    
}

int enqueue(int x){
    Node* newNode = new Node(x);
    if(rare == NULL){
        front = rare = newNode;
        return 0;
    }
 rare -> next = newNode;
 rare = newNode;
 return 0;
}
void dequeue(){
    if(front == NULL){
        cout << "queue is empty"<< endl;
        return;
    }
Node* temp = front;
front = front -> next;
delete temp;
}
int peek(){
    if(front == NULL){
        cout<< "queue is empty"<< endl;
        return -1;
    }
return front -> data;
}
int getsize(){
    Node* temp = front;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}
bool isempty(){
    if(front == NULL){
        return true;
    }
    return false;
}
};

int main(){

Queue q;

q.enqueue(10);
q.enqueue(20);
q.enqueue(30);  
q.enqueue(40);  
cout << "Size of queue: " << q.getsize() << endl;

cout << "Front element: " << q.peek() << endl;
q.dequeue();
cout << "Front element after pop: " << q.peek() << endl;
cout << "Size of queue after pop: " << q.getsize() << endl;
    return 0;
cout<<"is the queue empty?"<<q .isempty()<< endl;
}
