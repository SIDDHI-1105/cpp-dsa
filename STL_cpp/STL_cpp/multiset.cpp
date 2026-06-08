#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms;        // Allows duplicates, sorted order
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);

    cout << ms.count(1) << endl; // Prints 2 (two occurrences of 1)
    ms.erase(ms.find(1));        // Erase one occurrence of 1
    return 0;
}
