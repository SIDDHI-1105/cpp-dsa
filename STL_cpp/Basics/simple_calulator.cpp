#include <iostream>
#include <windows.h>
using namespace std;

int cal( int a, int b){

}

int main(){
    int a, b;
    char op;
    cout << "enter the number 1:";
    cin >> a;
    cout << "enter the number 2:";
    cin >> b;
    int result = 0;
    cout << "enter the operator:";
    cin >> op;
    if(op == '+'){
        result = a + b;
    }
    else if(op == '-'){
        result = a - b;
    }
  else if(op == '/'){
        result = a / b;
    }
 else if(op == '*'){
        result = a * b;
    }
 else if(op == '%'){
        result = a % b;
    }
    else {
        cout << "invalid operator";     
    }
    cout << "the result is " << result;
}