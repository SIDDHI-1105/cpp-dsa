#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s;              // Stores unique elements in sorted order
    s.insert(1);
    s.insert(2);
    s.insert(2);             // Duplicate ignored
    s.insert(4);
    s.insert(3);

    for(auto x: s) cout << x << " "; // Prints 1 2 3 4
    cout << endl;

    auto it = s.find(3);     // Find element
    if(it != s.end()) cout << "Found: " << *it << endl;

    s.erase(2);              // Erase element 2
    return 0;
}
