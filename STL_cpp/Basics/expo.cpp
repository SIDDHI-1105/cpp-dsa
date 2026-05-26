#include <iostream>
using namespace std;   

int power(int base, int pownum){
    int result = 1;
    for(int i = 0; i < pownum; i++){
        result = result * base;
    }
    return result;
}

int main(){

    
        cout << power(2,3);

    return 0;
}