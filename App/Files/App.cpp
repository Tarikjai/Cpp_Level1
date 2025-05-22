// Example program
#include <iostream>
#include <cmath> 
#include <string>
using namespace std;

void readTime(int& days, int& hours, int& minutes, int& seconds)
{

    cout << "Please enter the days  : \n";
    cin >> days;

    cout << "Please enter the hours  : \n";
    cin >> hours;

    cout << "Please enter the minutes  : \n";
    cin >> minutes;

    cout << "Please enter the seconds  : \n";
    cin >> seconds;
}



int transFunction(int  days, int hours, int minutes, int seconds)
{
    int secondsInDay = 60 * 60 * 24;
    return (days * secondsInDay) + (hours * (60 * 60)) + (minutes * 60) + seconds;
}



int main()
{
    int days, hours, minutes, seconds;

    readTime(days, hours, minutes, seconds);
   
    cout << transFunction(days, hours, minutes, seconds);
}
