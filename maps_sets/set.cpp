// set only keeps uniqe values therefore no duplicate values are stored 
#include<set>
#include<vector>
#include<iostream>
using namespace std;

int main(){
set<int> st;
st.insert(1);
st.insert(2);
st.insert(3);
st.insert(4);
st.insert(5);
st.insert(5);


auto it = st.find(5);

if(it != st.end()){
    cout << "found";

}

    cout << st.count(5) << endl;


st.erase(4);

for(auto it : st){
    cout << it;
}

//Remove duplicates
vector<int> nums = {5, 2, 8, 2, 5, 1, 8, 3};
set<int>st(nums.begin(),nums.end());
for(auto it : st){
    cout<< it <<endl;
}
if(st.count(5)){
    cout << "found" << endl;
}
return 0;
}


//An unordered_set stores:
// Unique values
// Not sorted