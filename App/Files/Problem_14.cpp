#include <iostream>
#include <string>
using namespace std;

void ReadNum(int& Num1, int& Num2)
{
	cout << "Please enter your Num1: " << endl;
	cin >> Num1;
	cout << "Please enter your Num2: " << endl;
	cin >> Num2;
}

void swap(int& a, int& b)
{
	int swap;
	swap = a;
	a = b;
	b = swap;

}


int main()
{
	int Num1, Num2;

	ReadNum(Num1, Num2);
	swap(Num1, Num2);


	cout << "Num 1 is now: " << Num1 << endl;
	cout << "Num 2 is now: " << Num2 << endl;
}