#include <iostream>
using namespace std;   


int main(){
   int age = 19;
   int *page = &age;
   double gpa = 2.7;
   double *pgpa = &gpa;
   string name = "Mike";
    string *pname = &name;
    cout << *page << endl;
    cout << &age;
}