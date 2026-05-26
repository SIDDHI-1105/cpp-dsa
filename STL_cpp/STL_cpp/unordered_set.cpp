#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> us;   // Stores unique elements, no order
    us.insert(1);
    us.insert(5);
    us.insert(2);
    us.insert(3);

    for(auto x: us) cout << x << " "; // Order is random
    return 0;
}
