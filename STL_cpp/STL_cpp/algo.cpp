#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5,2,8,1,3};

    // Sort ascending
    sort(v.begin(), v.end());
    for(int x: v) cout << x << " "; // 1 2 3 5 8
    cout << endl;

    // Sort descending
    sort(v.begin(), v.end(), greater<int>());
    for(int x: v) cout << x << " "; // 8 5 3 2 1
    cout << endl;

    // Reverse vector
    reverse(v.begin(), v.end()); 
    for(int x: v) cout << x << " "; // 1 2 3 5 8 (back to ascending)
    cout << endl;

    // Max / Min Element
    cout << *max_element(v.begin(), v.end()) << endl; // prints 8
    cout << *min_element(v.begin(), v.end()) << endl; // prints 1

    // Sum of all elements
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << endl; // prints 19

    // Count occurrences of 2
    int cnt = count(v.begin(), v.end(), 2);
    cout << cnt << endl; // prints 1

    // Find an element
    auto it = find(v.begin(), v.end(), 3);
    if(it != v.end()) cout << "Found 3" << endl;

    // Binary Search (works only on sorted container!)
    bool exists = binary_search(v.begin(), v.end(), 5);
    cout << (exists ? "5 exists" : "5 not found") << endl;

    // Lower Bound / Upper Bound
    auto lb = lower_bound(v.begin(), v.end(), 3); // first >= 3
    auto ub = upper_bound(v.begin(), v.end(), 3); // first > 3
    cout << "Lower bound of 3: " << (lb - v.begin()) << endl;
    cout << "Upper bound of 3: " << (ub - v.begin()) << endl;

    // Next / Previous Permutation
    vector<int> perm = {1,2,3};
    next_permutation(perm.begin(), perm.end()); // 1 3 2
    for(int x: perm) cout << x << " ";
    cout << endl;

    prev_permutation(perm.begin(), perm.end()); // back to 1 2 3
    for(int x: perm) cout << x << " ";
    cout << endl;

    return 0; // ✅ put return at the very end
}
