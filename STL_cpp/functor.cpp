#include <iostream>
using namespace std;

class funone{
    public:
    bool operator()(int a, int b){
       return a > b; 
    }
};
int main(){
funone cmp;

if(cmp(10,5) == true){
    cout << "10 is greater than 5" << endl;
}
else{
    cout<< "less than" << endl;
}


    return 0;
}