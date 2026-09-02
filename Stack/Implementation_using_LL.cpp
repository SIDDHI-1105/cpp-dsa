#include <iostream>
using namespace std;

class Stack{
class Node {
public:
    int data;
    Node* next;

Node(int x){
    data = x;
    next = NULL;
}

};
Node* top;

public: 

Stack(){
    top = NULL;
}

void push(int x){
Node* newNode =new Node(x);

newNode -> next = top;

top = newNode;

}
void pop(){
    if(top == NULL){
        cout << "stack is empty" << endl;
        return;
    }
    Node* temp = top;
    top = top -> next;
    delete temp;
}
 int peek() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }
};


int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top element: " << s.peek() << endl;
    s.pop();    
    cout << "Top element after pop: " << s.peek() << endl;
    

    return 0;
}