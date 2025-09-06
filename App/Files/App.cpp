#include <iostream>
#include <string>
using namespace std;






int main()
{
	int PIN = 1234, input = 0 , counter = 0;
	
	while (PIN != input & counter < 3)
	{
		cout << "Please enter your PIN: ";
		cin >> input;
		counter++;

		while (PIN != input & counter < 3)
		{
			cout << "Wrong code";
			cout << endl;
			break;
		}
	}
	
	while (PIN == input & counter < 3)
	{
		cout << "Your Balance is 7500";
		cout << endl;
		break;
	}
	
	while (PIN != input & counter == 3)
	{
		cout << "Card Locked";
		cout << endl;
		break;
	}
}