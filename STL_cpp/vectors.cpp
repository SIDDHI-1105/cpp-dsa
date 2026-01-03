#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;          // Declare empty vector
    v.push_back(1);         // Add element at end
    v.emplace_back(2);      // Add element (faster than push_back)

    vector<pair<int,int>> vp; // Vector of pairs
    vp.push_back({1,2});      // Insert pair using push_back
    vp.emplace_back(3,4);     // Insert pair using emplace_back

    vector<int> v1(5,100);    // Vector of size 5, all elements = 100
    vector<int> v2(v1);       // Copy constructor

    v.push_back(20);
    v.push_back(10);
    v.push_back(15);

    // Print using index
    for(int i=0;i<v.size();i++) cout << v[i] << " ";
    cout << endl;

    // Print using iterator
    for(auto it=v.begin(); it!=v.end(); it++) cout << *it << " ";
    cout << endl;

    v.erase(v.begin()+1);     // Erase element at index 1
    v.insert(v.begin(),300);  // Insert 300 at start
    return 0;
}
