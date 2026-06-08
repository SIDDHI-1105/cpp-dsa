#include <bits/stdc++.h>
using namespace std;

// Custom comparator function
// This example sorts based on the second element of a pair,
// and if equal, then sorts by the first element in descending order.
bool customCompare(pair<int,int> a, pair<int,int> b) {
    if(a.second == b.second) 
        return a.first > b.first; // If seconds are equal, sort by first descending
    return a.second < b.second;   // Otherwise sort by second ascending
}

int main() {
    vector<pair<int,int>> v = {{1,2},{2,1},{4,1},{3,2}};

    // Sort using custom comparator
    sort(v.begin(), v.end(), customCompare);

    // Print result
    for(auto it: v) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}
