#include <iostream>
using namespace std;


class Stack{
    public:
    int top;
    int *arr;
    int size;

  Stack(int size){
    this -> size = size;
    top = -1;
    arr = new int[size];
  } 
void push(int x){
if(size - top > 1){
    top++;
    arr[top] = x;
}
else{
    cout << "stack overflow" << endl;
}
  }
void pop(){
if(top >= 0){
    top--;
}
else{
    cout << "stack underflow" << endl;}
}

int peek(){
    if(top >= 0 ){
        return arr[top];
    }
    else{
        cout << "stack is empty" << endl;
        return -1;
    }
    }
bool isEmpty(){
   if(top == -1){
    return true;
   } 
   else{
    return false;
}
}
};

int main(){
Stack st(5);

st.push(1);
st.push(2); 
st.push(3); 
st.push(4); 
st.push(5); 

cout << "The top element is " << st.peek() << endl;

st .pop();

cout << "The top element after popping is " << st.peek() << endl;

cout << "is stack empty ??" << st.isEmpty()<< endl;

return 0;
}
