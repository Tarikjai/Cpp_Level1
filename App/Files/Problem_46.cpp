#include <iostream>
#include <string>
using namespace std;


void smallLetter()
{
	for (char i = 65; i <= 90; i++)
	{
		cout << i << endl;
	}
}

void capitalLetter()
{
	for (char i = 97; i <= 122; i++)
	{
		cout << i << endl;
	}
}


int main()
{
	smallLetter();
	cout << endl;
	capitalLetter();
}