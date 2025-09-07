#include <iostream>
#include <string>
using namespace std;


int readInput(int& input)
{
	cout << "Please insert the number" << endl;
	cin >> input;
	return input;
}

int sumFunction(int sum, int input)
{
	for (int i = 0; i < 5; i++)
	{
		readInput(input);
		if (input > 50)
		{
			continue;
			
		}
		sum += input;
	}
	
	return sum;
}

int main()
{
	int sum = 0, input=0;
	
	cout << sumFunction(sum, input);
}