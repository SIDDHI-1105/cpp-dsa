#include <bits/stdc++.h>
using namespace std;

// A void function (does not return anything)
void print() {
    cout << "Raj" << endl; // Prints "Raj"
}

// A function that returns the sum of two integers
int sum(int a, int b) {
    return a + b;
}

int main() {
    print();               // Calls the void function
    int s = sum(1, 5);     // Calls sum(1,5) → returns 6
    cout << s << endl;     // Prints 6
    return 0;
}
