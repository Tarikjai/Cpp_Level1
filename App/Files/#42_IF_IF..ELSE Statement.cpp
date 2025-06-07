#include <iostream>
#include <string>
using namespace std;

int DriverAGE(int& age)
{
	cout << "Please enter your AGE: " << endl;
	cin >> age;
	return age;
}

bool License(bool& hasDriverLicence)
{
	cout << "has a driver license (Yes=1, No=0) ? " << endl;
	cin >> hasDriverLicence;
	return hasDriverLicence;

}


void PrintResult(int age, bool hasDriverLicence)
{
	if (age >= 21 && hasDriverLicence == 1)
	{
		cout << "Hired";
	}
	else {
		cout << "Rejected";
	}


}

int main()
{
	int age;
	bool hasDriverLicence;


	DriverAGE(age);

	License(hasDriverLicence);

	PrintResult(age, hasDriverLicence);

}
