#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Insert at Head
void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Insert at Tail
void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

// Insert at a specific position
void insertAtPosition(int position, int d, Node* &head, Node* &tail) {

    // Position 1 → Head
    if (position == 1) {
        insertAtHead(head, d);
        return;
    }

    // Start from head
    Node* temp = head;
    int cnt = 1;

    // Move temp to the node before the position
    while (cnt < position - 1) {
        temp = temp->next;
        cnt++;
    }

    // Inserting at Last Position
    if (temp->next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    // Creating a new node for d
    Node* nodeToInsert = new Node(d);

    // Connect new node to the next node
    nodeToInsert->next = temp->next;

    // Connect previous node to new node
    temp->next = nodeToInsert;
}

// Print Linked List
void print(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {

    // Create first node
    Node* node1 = new Node(10);

    cout << node1->data << endl;
    cout << node1->next << endl;

    // Head and Tail initially point to node1
    Node* head = node1;
    Node* tail = node1;

    print(head);

    // Insert at head
    insertAtHead(head, 12);
    print(head);

    // Insert at head
    insertAtHead(head, 15);
    print(head);

    // Insert at position 1
    insertAtPosition(1, 22, head, tail);
    print(head);

    return 0;
}