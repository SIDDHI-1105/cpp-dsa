#include <iostream>
using namespace std;

int main() {
    bool ismale = false;
    bool istall = true;

    if (ismale && istall) {
        cout << "You are a tall male";
    } else if(ismale && !istall) {
        cout << "You are not short male";
    }
    else{
        cout << "You are not male";
    }

    return 0;
}
