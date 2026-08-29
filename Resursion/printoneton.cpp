#include<iostream>
using namespace std;

void oneton(int n){
    if( n == 0){
        return;
    }
    cout << n << " ";
    oneton(n-1);
}


int main(){
cout << " enter n " << endl;
int n ;
cin >> n;

oneton(n);

    return 0;
}