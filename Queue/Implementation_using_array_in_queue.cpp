#include <iostream>
#include <queue>
using namespace std;

class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rare;

    Queue(int size){
        this -> size = size;
        arr = new int[size];
        front = 0;
        rare = 0;
    }
    void dequeue(){
        if(front == rare){
            cout << "queue is empty"<< endl;
            return;
        }
        front++;
    }
    void enqueue(int x){
        if( rare == size){
            cout << "queue is full"<< endl;
            return;
        }
       arr[rare] = x;
       rare++;
    }
int peek(){
    if(front == rare){
        cout << "queue is empty"<< endl;
        return -1;
    }
    return arr[front];
}
int getSize(){
    return rare - front;
}
bool isEmpty(){
    return front == rare;
}
};

int main(){
Queue q(5);

q.enqueue(10);
q.enqueue(20);
q.enqueue(30);

cout << "Front element: " << q.peek() << endl;
q.dequeue();
cout << "Front element after pop: " << q.peek() << endl;
cout << "Size of queue: " << q.getSize() << endl;
cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    return 0;
}