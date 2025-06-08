#include <iostream>
#include <string>
using namespace std;

void readInput(int& Mark1, int& Mark2, int& Mark3)
{

	cout << "Please insert input1: " << endl;
	cin >> Mark1;

	cout << "Please insert input2: " << endl;
	cin >> Mark2;

	cout << "Please insert Mark3: " << endl;
	cin >> Mark3;
}


void PrintResult(int Mark1, int Mark2, int Mark3)
{
	int AVG = (Mark1 + Mark2 + Mark3) / 3;
	cout << AVG << endl;

	if (AVG >= 50)
	{
		cout << "Pass";
	}
	else {
		cout << "Fail";
	}

}

int main()
{
	int Mark1, Mark2, Mark3;
	readInput(Mark1, Mark2, Mark3);
	PrintResult(Mark1, Mark2, Mark3);

}
