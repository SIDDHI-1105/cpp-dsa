#include <bits/stdc++.h>
using namespace std;

int main() {

    // Empty vector
    vector<int> marks;

    // Vector of size 10 initialized with 0
    vector<int> miles(10);

    // ---------------- VECTOR BASICS ----------------

    vector<int> distans;

    // Reserve capacity
    distans.reserve(10);

    // Insert elements
    distans.push_back(10);
    distans.push_back(20);
    distans.push_back(30);
    distans.push_back(15);
    distans.push_back(55);

    // Access elements
    cout << "First element using begin(): "
         << *(distans.begin()) << endl;

    cout << "Front element: "
         << distans.front() << endl;

    cout << "Back element: "
         << distans.back() << endl;

    // Check if vector is empty
    if(distans.empty()) {
        cout << "Vector is empty" << endl;
    }
    else {
        cout << "Vector is NOT empty" << endl;
    }

    // Size
    cout << "Size: "
         << distans.size() << endl;

    // Update element
    distans[0] = 100;

    // Access using []
    cout << "Using [] : "
         << distans[0] << endl;

    // Access using at()
    cout << "Using at() : "
         << distans.at(0) << endl;

    // Capacity
    cout << "Capacity: "
         << distans.capacity() << endl;

    // Max size
    cout << "Max size: "
         << distans.max_size() << endl;

    // Print vector
    cout << "\nDistans vector: ";
    for(int i : distans) {
        cout << i << " ";
    }
    cout << endl;

    // Insert at beginning
    distans.insert(distans.begin(), 50);

    cout << "\nAfter insert: ";
    for(int i : distans) {
        cout << i << " ";
    }
    cout << endl;

    // Erase second element
    distans.erase(distans.begin() + 1);

    cout << "\nAfter erase: ";
    for(int i : distans) {
        cout << i << " ";
    }
    cout << endl;

    // ---------------- ANOTHER VECTOR ----------------

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    v.push_back(20);
    v.push_back(10);
    v.push_back(15);
    v.push_back(50);
    v.push_back(60);

    // Vector of pairs
    vector<pair<int,int>> vp;

    vp.push_back({1,2});
    vp.emplace_back(3,4);

    // Vector initialized with values
    vector<int> v1(5, 100);

    // Copy vector
    vector<int> v2(v1);

    // Print using index
    cout << "\nVector v using index: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Print using iterator
    cout << "Vector v using iterator: ";
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Erase element at index 1
    v.erase(v.begin() + 1);

    // Insert at beginning
    v.insert(v.begin(), 300);

    cout << "\nAfter modifications in v: ";
    for(int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // Swap vectors
    v.swap(distans);

    cout << "\nAfter swap, distans vector: ";
    for(int i : distans) {
        cout << i << " ";
    }
    cout << endl;

    // Clear vector
   // distans.clear();

   /* cout << "\nAfter clear, size of distans: "
         << distans.size() << endl;*/


    vector<int>::iterator it = v.begin();
    while(it!=v.end()){
        cout<<*it<<" ";
        it++;
    }
    cout << endl;;
        return 0;

}