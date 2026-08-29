#include<iostream>
using namespace std;

int poww(int n,int m){
if(m == 0){
    return 1;
}
return n * poww(n,m-1);
}


int main(){
cout << " enter n base " << endl;
int n ;
cin >> n;
cout << " enter m power" << endl;
int m;
cin >> m;

cout << poww(n,m);

    return 0;
}