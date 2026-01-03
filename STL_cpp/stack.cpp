#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;           // LIFO stack
    st.push(1);              // Push element
    st.push(2);
    st.push(3);
    cout << st.top() << endl; // Top element → 3
    st.pop();                 // Remove top element
    cout << st.top() << endl; // Now top → 2
    return 0;
}
