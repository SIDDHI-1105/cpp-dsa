#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int>s;
    s.push(1);
    s.push(2);
    s.push(3);

s.pop();

if(s.empty()){
    cout << "stack is empty" << endl;
} else {
    cout << " top element is " << s.top() << endl;
    cout << " size of stack is " << s.size() << endl;
}

}