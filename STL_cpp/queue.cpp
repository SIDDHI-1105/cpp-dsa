#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;            // FIFO queue
    q.push(1);               // Insert at back
    q.push(2);
    q.push(4);
    cout << q.front() << endl; // First element → 1
    q.pop();                   // Remove front
    cout << q.front() << endl; // Now front → 2
    return 0;
}
