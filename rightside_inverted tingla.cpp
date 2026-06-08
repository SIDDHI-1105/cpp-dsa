#include <iostream>
using namespace std;
int n = 4;
int main(){
    for(int i = 0 ; i < 2*n-1; i++){
        int star = i;
        if(i >= n) star = 2*n - i - 2;
        for(int j = 1; j <= star; j++){
            cout << "*" ;
        }
            cout<< endl;   
    }
      
    }


