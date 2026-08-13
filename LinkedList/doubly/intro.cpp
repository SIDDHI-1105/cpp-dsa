#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Print function
void printfn(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Get length of linked list
int getlength(Node* head) {
    int len = 0;
    Node* temp = head;

    while (temp != NULL) {
        len++;
        temp = temp->next;
    }

    return len;
}

// Insert a node at the head
void insertathead(Node* &head, int d) {

    // Create a new node
    Node* temp = new Node(d);

    // If list is empty
    if (head == NULL) {
        head = temp;
        return;
    }

    // Connect new node to old head
    temp->next = head;

    // Connect old head back to new node
    head->prev = temp;

    // Make new node the head
    head = temp;
}

void insertattail(Node* &head,Node* &tail, int d) {
    Node* temp = new Node(d);

    // If list is empty
    if (head == NULL) {
        head = temp;
        tail = temp;
        return;

    }
    tail->next = temp;
    temp->prev = tail;
    tail = temp;

}

int main() {

    // Create first node
    Node* node1 = new Node(10);
    Node* node2 = new Node(20);
    Node* node3 = new Node(30);
    // Head points to first node
    Node* head = node1;
    Node* tail = node3;

node1->next = node2;
node2->prev = node1;

node2->next = node3;
node3->prev = node2;

    // Print original list
    cout << "Original list: ";
    printfn(head);


    // Insert 20 at head
    insertathead(head, 20);

    insertattail(head, tail, 40);

    // Print updated list
    cout << "After inserting at head & tail: ";
    printfn(head);

    // Print original node's data
    cout << "node1 data: " << node1->data << endl;

    // Print new head's data
    cout << "head data: " << head->data << endl;

    // Print length
    cout << "Length of linked list: "
         << getlength(head) << endl;

    return 0;
}