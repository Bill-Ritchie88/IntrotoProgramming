#include <iostream>
using namespace std;

int main() {  //variable to store the user input 
    double days;
    double seconds;

    cout << "Enter the number of days:";
    cin >> days;
    //Logic: convert days to seconds by multiplying by 24 hours, 60 minutes, and 60 seconds 
    seconds = days*24*60*60;
    cout << days << "day(s) is equal to " << seconds << "seconds."; 

    return 0;
}