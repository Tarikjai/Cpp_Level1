#include <iostream>
#include <string>
using namespace std;

int readPIN()
{
	int input;
	cout << "Please insert your ATM PIN: " << endl;
	cin >> input;
	return input;
}



void PrintResult(int UserInput)
{

	if (UserInput == 1234)
	{
		cout << "Your Balance is: 7500";
	}
	else
	{
		cout << "Wrong PIN";
	}

}

int main()
{
	int UserInput = readPIN();

	PrintResult(UserInput);

}