#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int,int> mp;         // Key-value pairs, keys unique & sorted
    mp[1] = 2;               // Key=1, Value=2
    mp.emplace(3,1);         // Key=3, Value=1
    mp.insert({2,4});        // Key=2, Value=4

    // Iterate through map
    for(auto it: mp) {
        cout << it.first << " " << it.second << endl;
    }

    auto it = mp.find(2);    // Find key=2
    if(it != mp.end()) cout << "Found key 2 with value " << it->second << endl;
    return 0;
}
