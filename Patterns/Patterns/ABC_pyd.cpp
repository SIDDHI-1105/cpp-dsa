#include <iostream>
using namespace std;
int n = 5;
char start = 'A';
int main(){
//space
for(int i = 1; i <=n ; i ++ ) {
     start = 'A';
    for(int j = 0 ; j < n - i ; j++){
         cout << "  ";
   }


//star
int bp = (2*i-1)/2;
    for(int j = 0 ; j <2*i-1 ; j++){
         cout << start << " ";
         if(j < bp)   start++;
        else start--;
   }

//space
    for(int j = 0 ; j < n - i ; j++){
         cout << "  ";
}
  cout << endl;

}
    
    }

 
