#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;            // FIFO queue
    q.push(1);               // Insert at back
    q.push(2);
    q.push(4);
    cout << q.front() << endl; // First element → 1
        cout << q.back() << endl;

   cout<< q.size()<<endl;
    q.pop();                // Remove front
    return 0;

}
