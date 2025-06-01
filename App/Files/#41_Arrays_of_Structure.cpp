// Example program

/*
1 proceedure read info of a person
1 procedure print info of a persone

2 procedure
	1 procedure that read all structutree array of 2 personne => call the procedure that read  personne
	1 procedure that print 2 personn => call the procedure that print  1 person */

#include <iostream>
#include <string>
using namespace std;

struct PersonInfo
{
	string FirstName;
	string LastName;
	int Age;
	int Phone;
};

void readInfo(PersonInfo Pinfo[])
{
	cout << "Type your FirstName: " << endl;
	cin >> Pinfo[0].FirstName;
	cout << "Type your LastName: " << endl;
	cin >> Pinfo[0].LastName;
	cout << "Type your Age: " << endl;
	cin >> Pinfo[0].Age;
	cout << "Type your Phone: " << endl;
	cin >> Pinfo[0].Phone;
	cout << endl;

	cout << "Type your FirstName: " << endl;
	cin >> Pinfo[1].FirstName;
	cout << "Type your LastName: " << endl;
	cin >> Pinfo[1].LastName;
	cout << "Type your Age: " << endl;
	cin >> Pinfo[1].Age;
	cout << "Type your Phone: " << endl;
	cin >> Pinfo[1].Phone;
	cout << endl;


}

void printInfo(PersonInfo Pinfo[])
{
	cout << "***************************" << endl;
	cout << "FirstName: " << Pinfo[0].FirstName << endl;
	cout << "LastName: " << Pinfo[0].LastName << endl;
	cout << "Age: " << Pinfo[0].Age << endl;
	cout << "Phone: " << Pinfo[0].Phone << endl;
	cout << "***************************" << endl;
	cout << "***************************" << endl;
	cout << "FirstName: " << Pinfo[1].FirstName << endl;
	cout << "LastName: " << Pinfo[1].LastName << endl;
	cout << "Age: " << Pinfo[1].Age << endl;
	cout << "Phone: " << Pinfo[1].Phone << endl;
	cout << "***************************" << endl;

}

void readAll(PersonInfo Pinfo[])
{
	readInfo(Pinfo);


}

void printAll(PersonInfo Pinfo[])
{
	printInfo(Pinfo);
}

int main()
{
	PersonInfo Pinfo[2];
	readAll(Pinfo);
	printAll(Pinfo);

}
