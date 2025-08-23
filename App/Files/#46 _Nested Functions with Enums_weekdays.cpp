#include <iostream>
#include <string>
using namespace std;


enum enWeekday {
	sun = 1,
	mon = 2,
	tue = 3,
	wed = 4,
	thu = 5,
	fri = 6,
	sat = 7
};

void ShowWeekday()
{
	cout << "********************" << endl;
	cout << "     Week days    " << endl;
	cout << "********************" << endl;
	cout << " * 1 : Sunday * " << endl;
	cout << " * 1 : Sunday * " << endl;
	cout << " * 2 : Monday * " << endl;
	cout << " * 3 : Tuesday * " << endl;
	cout << " * 4 : Wednesday * " << endl;
	cout << " * 5 : Thursday * " << endl;
	cout << " * 6 : Friday * " << endl;
	cout << " * 7 : Saturday * " << endl;
	cout << "********************" << endl;
	cout << "Please choose a day Number: " << endl;
}

enWeekday selectWeekDay()
{
	enWeekday WeekDay;

	int WD;
	cin >> WD;

	return (enWeekday)WD;


}

string DisplayResult(enWeekday WeekDay)
{
	switch (WeekDay)
	{
	case enWeekday::sun:
		return "Sunday";
		break;
	case enWeekday::mon:
		return "Monday";
		break;
	case enWeekday::tue:
		return "Tuesday";
		break;
	case enWeekday::wed:
		return "Wednesday";
		break;
	case enWeekday::thu:
		return "Thursday";
		break;
	case enWeekday::fri:
		return "Friday";
		break;
	case enWeekday::sat:
		return "Saturday";
		break;
	default:
		return "Invalid Day";
	}
}


/*
int readmonth(int& month)
{
	cout << "Please enter the month number: ";
	cin >> month;
	return month;
}

void print(int month)
{

}
*/
int main()
{
	ShowWeekday();

	cout << DisplayResult(selectWeekDay());

}