#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> myls;            // Doubly linked list
    myls.push_back(2);  
      myls.push_back(2);  
        myls.push_back(2);  
          myls.push_back(2);  
            myls.push_front(20);
            
    myls.pop_back();
    myls.pop_front();
    myls.emplace_back(4);      // Insert at end (optimized)
    myls.push_front(5);        // Insert at front
    myls.emplace_front(10);    // Insert at front (optimized)
    cout<< myls.front()<<endl;        
    cout<< myls.back()<<endl;    
    myls.insert(myls.begin(),100);

    list<int>::iterator it  = myls.begin();
while(it != myls.end()){
    cout << *it << " ";
    it++;
}
myls.remove(10);

    list<int>::iterator it2  = myls.begin();
while(it2 != myls.end()){
    cout << *it2 << " ";
    it2++;
}

myls.erase(myls.begin() , myls.end());
    myls.clear();

    if(myls.empty() == true){
        cout<<"list empty"<<endl;
    }

}
