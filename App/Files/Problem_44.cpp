#include <iostream>
#include <string>
using namespace std;


int ReadDay()
{
	int day;
	cout << "Enter the day: " << endl;
	cin >> day;
	return day;
}

void printResult(int day)
{
	if (day == 1)
		cout << "Sunday";
	else if (day == 2)
		cout << "Monday";
	else if (day == 3)
		cout << "Tuesday";
	else if (day == 4)
		cout << "Wednesday";
	else if (day == 5)
		cout << "Thursday";
	else if (day == 6)
		cout << "Friday";
	else if (day == 7)
		cout << "Saturday";
	else
		cout << "Wrong Day";

}

int main()
{
	int  day = ReadDay();

	printResult(day);


}