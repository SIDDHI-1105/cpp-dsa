#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;           // Double-ended queue
    dq.push_back(1);         // Insert at end
        dq.push_back(2);         // Insert at end
    dq.push_back(3);         // Insert at end
    dq.push_back(4);         // Insert at end

    dq.push_front(20);        // Insert at front
    dq.pop_back();           // Remove from end
    dq.pop_front(); 
    
    cout<< dq.size() << endl;
        cout<< dq.front() << endl;
    cout<< dq.back() << endl;
    cout<< dq[0]<< endl;
dq.insert(dq.begin(),101);
    deque<int>::iterator it = dq.begin();

    while(it != dq.end()){
        cout<<*it<<" ";
        it++;
    }

    return 0;
}
