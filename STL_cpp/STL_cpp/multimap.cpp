#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<int,int> mmp;   // Allows duplicate keys
    mmp.insert({1,100});
    mmp.insert({1,200});     // Same key, different value
    mmp.insert({2,300});

    // Iterate through all key-value pairs
    for(auto it: mmp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Erase all values for a key
    mmp.erase(1); // removes both entries with key=1
    return 0;
}
