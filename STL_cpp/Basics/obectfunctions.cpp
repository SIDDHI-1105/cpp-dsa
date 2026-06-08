#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    string major;
    double gpa;
    Student(string aname, string amajor, double agpa){
        name = aname;
        major = amajor;
        gpa = agpa;
    }
    bool hasHonors(){
        if(gpa >= 3.5){
            return true;
        } else {
            return false;   
        }
    }

};

int main(){
    Student student1("Jim", "Business", 2.8);
    Student student2("Pam", "Art", 3.6);

    cout << student1.name << " has a GPA of " << student1.gpa << endl;
    cout << student2.name << " has a GPA of " << student2.gpa << endl;
    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;
    return 0;
}