#include <iostream>
#include <windows.h>

using namespace std;

int getmax(int a, int b, int c = 3){
    int result;
    if(a>b && a>c){
        result = a;
    }else if(b>c && b>a){
        result = b;
    }else{
        result = c;
    }
    return result;  
}

int main(){
cout << getmax(2,5,8);
return 0;
}

