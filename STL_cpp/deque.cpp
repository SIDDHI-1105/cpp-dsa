#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;           // Double-ended queue
    dq.push_back(1);         // Insert at end
    dq.push_front(2);        // Insert at front
    dq.pop_back();           // Remove from end
    dq.pop_front();          // Remove from front
    return 0;
}
