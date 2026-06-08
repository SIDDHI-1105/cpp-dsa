#include <iostream>
using namespace std;

string getDayOfWeek(int daynum){
    string dayname;
    switch(daynum){
        case 0:
        dayname = "sunday";
        break;
        case 1:
        dayname = "monday";
        break;
        case 2:
        dayname = "tuesday";
        break;  
        case 3:
        dayname = "wednesday";
        break;
        case 4: 
        dayname = "thursday";
        break;
        case 5:
        dayname = "friday"; 
        break;
        case 6: 
        dayname = "saturday";
        break;
        default:
        dayname = "invalid day number";
    return dayname;
    }
}

/* using simple if-else statements

string getDayOfWeek(int daynum){
    string dayname;
    if(daynum == 0){
    dayname = "Sunday"; 
    }
    else if( daynum == 1){
        dayname = "monday";
    }
    else if( daynum == 2){
        dayname = "tuesday";
    }
    else if( daynum == 3){
        dayname = "wednesday";
    }
    else if( daynum == 4){
        dayname = "thursday";
    }
    else if( daynum == 5){
        dayname = "friday";
    }
    else if( daynum == 6){
        dayname = "saturday";
    }
    else{
        {
        dayname = "invalid day number";         
    }
    }
    return dayname;
}
*/
main(){
    cout << "enter the day number";
    int daynum;
    cin >> daynum;
    string dayname = getDayOfWeek(daynum);
    cout << "the day is " << dayname;
    return 0;
}