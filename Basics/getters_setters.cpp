#include <iostream>
using namespace std;

class Movies{
    private :
    int rating;
    public :
    string title;
    string director;
    Movies(string atitle, string adirector, int arating){
        title = atitle;
        director = adirector;
        setRating(arating);   // use setter

    } 
    void setRating(int arating){
        if(arating > 0 && arating <= 10){
            rating = arating;
        } else {
            rating = 0;
        }}
        int getRating(){
            return rating;
    }
};

int main(){
    Movies avengers("The Avengers", "Joss Whedon", 9);
    avengers.setRating(6);
    cout << avengers.getRating() ;
}