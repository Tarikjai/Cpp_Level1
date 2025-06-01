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

void readInfo(PersonInfo& Pinfo)
{
	cout << "Type your FirstName: " << endl;
	cin >> Pinfo.FirstName;
	cout << "Type your LastName: " << endl;
	cin >> Pinfo.LastName;
	cout << "Type your Age: " << endl;
	cin >> Pinfo.Age;
	cout << "Type your Phone: " << endl;
	cin >> Pinfo.Phone;
	cout << endl;

}

void printInfo(PersonInfo& Pinfo)
{
	cout << "***************************" << endl;
	cout << "FirstName: " << Pinfo.FirstName << endl;
	cout << "LastName: " << Pinfo.LastName << endl;
	cout << "Age: " << Pinfo.Age << endl;
	cout << "Phone: " << Pinfo.Phone << endl;
	cout << "***************************" << endl;

}

void readAll(PersonInfo Pinfo[2])
{
	readInfo(Pinfo[0]);
	readInfo(Pinfo[1]);


}

void printAll(PersonInfo Pinfo[2])
{
	printInfo(Pinfo[0]);
	printInfo(Pinfo[1]);
}

int main()
{
	PersonInfo Pinfo[2];
	readAll(Pinfo);
	printAll(Pinfo);

}
