#include<iostream>
using namespace std;

void ntoone(int n){
    if( n == 0){
        return;
    }
    cout << n << " ";
    ntoone(n-1);
}


int main(){
cout << " enter n " << endl;
int n ;
cin >> n;

ntoone(n);

    return 0;
}