#include <iostream>
#include <string>
using namespace std;

string ReadName(string Name)
{
	cout << "Please enter your Name: " << endl;
	cin >> Name;
	return Name;
}

void PrintName(string Name)
{
	cout << "Your Name is: " << Name;
}

int main()
{
	string Name;

	Name = ReadName(Name);

	PrintName(Name);
}