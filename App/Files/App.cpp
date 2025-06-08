#include <iostream>
#include <string>
using namespace std;

int readInput()
{
	int Age;
	cout << "Please insert your Age: " << endl;
	cin >> Age;
	return Age;
}



void PrintResult(int Age)
{
 
	if (Age >= 18 && Age <= 45)
	{
		cout << "Valid Age";
	}
	else 
	{
		cout << "INValid Age";
	}

}

int main()
{
	int Age = readInput();
	
	PrintResult(Age);
	
}
