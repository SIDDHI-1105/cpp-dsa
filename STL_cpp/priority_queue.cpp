#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> pq; // Max-heap (largest element at top)
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    cout << pq.top() << endl; // Prints 10
    pq.pop();                 // Removes 10
    cout << pq.top() << endl; // Prints 8

    // Min-heap (smallest element at top)
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(5);
    minpq.push(2);
    minpq.push(8);
    cout << minpq.top() << endl; // Prints 2
    return 0;
}
