#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int,string> ump; // Stores key-value pairs, no order
    ump[1] = "Raj";
    ump[2] = "Siddhi";
    ump[3] = "AI";

    for(auto it: ump) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Find element
    auto it = ump.find(2);
    if(it != ump.end()) cout << "Found key 2 with value " << it->second << endl;
    return 0;
}
