// Example program
#include <iostream>
#include <string>
using namespace std;

struct ProfessionelInfo {
	int MonthlySalary;
	string WorkPlace;
};


struct PersonnelInfo {
	string Name;
	int Age;
	string City;
	string Country;
	ProfessionelInfo pro;

	char Gender;
	bool Married;
};

void readInfo(PersonnelInfo& PersInfo)
{
	cout << "Please enter your Name: " << endl;
	cin >> PersInfo.Name;
	cout << "Please enter your Age: " << endl;
	cin >> PersInfo.Age;
	cout << "Please enter your City: " << endl;
	cin >> PersInfo.City;
	cout << "Please enter your Country: " << endl;
	cin >> PersInfo.Country;
	cout << "Please enter your Monthly Salary: " << endl;
	cin >> PersInfo.pro.MonthlySalary;

	cout << "Please enter your Workplace: " << endl;
	cin >> PersInfo.pro.WorkPlace;
	cout << "Please enter your Gender: " << endl;
	cin >> PersInfo.Gender;
	cout << "Are you Married: " << endl;
	cin >> PersInfo.Married;
}

void printInfo(PersonnelInfo& PersInfo)
{
	cout << "*********************************" << endl;
	cout << "Name: " << PersInfo.Name << endl;
	cout << "Age: " << PersInfo.Age << endl;
	cout << "City: " << PersInfo.City << endl;
	cout << "Country: " << PersInfo.Country << endl;
	cout << "Monthly Salary: " << PersInfo.pro.MonthlySalary << endl;
	cout << "Workplace: " << PersInfo.pro.WorkPlace << endl;
	cout << "Gender: " << PersInfo.Gender << endl;
	cout << "Married: " << PersInfo.Married << endl;
	cout << "*********************************" << endl;
}


int main()
{
	PersonnelInfo PersInfo;
	readInfo(PersInfo);
	printInfo(PersInfo);
}
