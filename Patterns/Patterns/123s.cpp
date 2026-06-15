#include <iostream>
using namespace std;

int n = 5;

int main(){
int k = 1;
for(int i = 0 ; i < n ; i ++ ) {
    for(int j = 0 ; j <= i ; j++){
        cout << k << " ";
        k++;
}
cout << endl;
}}