#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int,string> ump; // Stores key-value pairs, no order
    ump[1] = "Raj";
    ump[2] = "Siddhi";
    ump[3] = "AI";
    ump.insert(make_pair(5,"mercy"));

    pair<int,string> p;
    p.first = 6;
    p.second = "deeksha";
    ump.insert(p);


    cout << ump.at(1) << endl;
if(ump.find(1) != ump.end()){
cout << "key found" << endl;
}
else{
    cout << "not foud" << endl;
}
    for(auto it: ump) {
        cout << it.first << " -> " << it.second << endl;
    }
    ump.find(1);
    // Find element
    auto it = ump.find(2);
    if(it != ump.end()) cout << "Found key 2 with value " << it->second << endl;
    return 0;
}
