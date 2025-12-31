#include <iostream>
using namespace std;

class Chef{
public: 
void makechicken(){
    cout << " the chef makes chicken" << endl;
}
void makeSalad(){
    cout << " the chef makes salad" << endl;    
}
void makeSpecialDish(){
    cout << " the chef makes bbq ribs" << endl;         
}

};
class ItalianChef : 
public Chef{ 
    public:
    void makepasta(){
    cout << " the italian chef makes pasta" << endl;
    }
};// inheritance

int main(){
    Chef chef1; // create an object of Chef class
    chef1.makechicken();
    
    ItalianChef chef2; // create an object of ItalianChef class
    chef2.makechicken(); // inherited from Chef class
    chef2.makepasta(); // own method of ItalianChef class
}