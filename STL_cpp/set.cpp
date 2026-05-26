#include <bits/stdc++.h>
using namespace std;

int main() {

    // Ordered set
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(2);   // Duplicate ignored
    s.insert(4);
    s.insert(3);

    cout << "Ordered set: ";
    if(s.find(3) != s.end())
    {cout<< "found";}
    else{ cout<< "not found";}
    set<int>::iterator it = s.begin();

    int cnt = s.count(2);
    cout<< "the count is" << cnt << endl;

    while(it != s.end()) {
        cout << *it << " ";
        it++;
    }

    cout << endl;

    // Unordered set
    unordered_set<int> uns;

    uns.insert(1);
    uns.insert(2);
    uns.insert(2);
    uns.insert(4);
    uns.insert(3);

    cout << "Unordered set: ";

    unordered_set<int>::iterator it2 = uns.begin();

    while(it2 != uns.end()) {
        cout << *it2 << " ";
        it2++;
    }

    cout << endl;

    // Range-based loop
    cout << "Using for-each: ";

    for(auto x : s) {
        cout << x << " ";
    }

    cout << endl;

    // Find element
    auto found = s.find(3);

    if(found != s.end()) {
        cout << "Found: " << *found << endl;
    }

    // Erase element
    s.erase(2);

    cout << "After erase: ";

    for(auto x : s) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}