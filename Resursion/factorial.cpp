#include <iostream>
using namespace std;



int fact(int n){
    if(n == 0){
        return 1;
    }
return fact(n-1)*n;
    }
   

int main(){
cout <<" enter n" << endl;
int n;
cin >> n;

cout << fact(n);
}