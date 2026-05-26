#include <iostream>
using namespace std;

class student{
    public:
    int marks;
    string name;
    student(int m , string n){
        this -> marks = m;
        this -> name  = n;
    }
    };
// functor
class studentcomparator{
    public:
    bool operator()(student a, student b){
return a.marks < b.marks;
    }
};

int main(){
student s1(93,"siddhi");
student s2(83, "deeksha");


studentcomparator cmp;

if(cmp(s1,s2)){
    cout<< "sid's marks are less";

}
else{
    cout<<" deek's marks are less";
}

    return 0;
}