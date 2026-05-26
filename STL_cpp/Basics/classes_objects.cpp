#include <iostream>
using namespace std;   

class book{
public:
string title;
string author;
book(){
    title ="No Title";
    author = "No Author";       
    pages = 0;
}

int pages;
book(string name, string auth, int pg){ //constructor
    title = name;
    author = auth;
    pages = pg;
}
};
int main(){
   book book1("Harry Potter", "JK Rowling", 1000);
   /*book1.title = "Harry Potter";
   book1.author = "JK Rowling";
   book1.pages = 1000;*/
   //cout << book1.title;



}