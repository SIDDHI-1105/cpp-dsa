#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> ls;            // Doubly linked list
    ls.push_back(2);         // Insert at end
    ls.emplace_back(4);      // Insert at end (optimized)
    ls.push_front(5);        // Insert at front
    ls.emplace_front(10);    // Insert at front (optimized)

    for(auto x: ls) cout << x << " "; // Print all elements
    return 0;
}
