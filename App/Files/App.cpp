#include <iostream>
#include <string>
using namespace std;

 
int readDay(int& day)
{
	cout << "Please enter the day number: ";
	cin >> day;
	return day;
}

void print(int day)
{
	switch (day)
	{ 
		case 1:
			cout << "Sunday";
				break;
	 	case 2:
			cout << "Monday";
			break;
		case 3:
			cout << "Tuesday";
			break;
		case 4:
			cout << "Wednesday";
			break;
		case 5:
			cout << "Thursday";
			break;
		case 6:
			cout << "Friday";
			break;
		case 7:
			cout << "Saturday";
			break;
		default:
			cout << "Invalid day number";
	}
}

int main()
{
	int day;
	readDay(day);
	print(day);
}