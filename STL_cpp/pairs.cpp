#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int,int> p = {1,3};             // Pair of two integers
    cout << p.first << " " << p.second << endl; // Access first and second

    // Nested pair: first is int, second is another pair
    pair<int, pair<int,int>> nested = {1,{3,4}};
    cout << nested.first << " " << nested.second.first << " " << nested.second.second << endl;

    // Array of pairs
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].second << endl;       // Access second element of pair at index 1 → prints 4
    return 0;
}
