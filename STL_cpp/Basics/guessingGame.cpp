#include <iostream>
using namespace std;

int main(){
    int secret_num = 7;
    cout << "Guess a number between 1 and 10: ";
    int num ;
    cin >> num; 
    int guess_count = 0;
    int guess_limit = 3;
    bool out_of_guesses = false;
    
    while( num != secret_num && !out_of_guesses){
       if( guess_count >= guess_limit){
        out_of_guesses = true; 
        break;
       }
        if(num > 10 || num < 1){
        cout << " the range is b/w 1 to 10 only.\n";}
        else{
            cout << "Wrong guess! Try again: ";
        }
    
    guess_count++;
    cout << "try again: ";
    cin >> num;
    }
    if(out_of_guesses){
        cout << "You lose! The correct number was " << secret_num ;
}
else{
    cout << "Congratulations! You guessed IT!" ;

}
return 0;
}