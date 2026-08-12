#include<iostream>
using namespace std;

class Node{
public :
int d1;
Node* next;
Node(int data){
    this -> d1 = data;
    this -> next = NULL;
}

};

int main(){
Node* node1 = new Node(25);
Node* node2 = new Node(20);
Node* node3 = new Node(30);

node1 -> next = node2;
node2 -> next = node3;

cout << node1 -> d1 << endl;
cout << node2 -> d1 << endl;
cout<< node3 -> d1 << endl;
    return 0;
}