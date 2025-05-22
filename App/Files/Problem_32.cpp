#include <iostream>
#include <string>
using namespace std;


void readAB(int& a, int& b)
{
	cout << "Please enter N: " << endl;
	cin >> a;
	cout << "Please enter M: " << endl;
	cin >> b;
}

float Outputs(int a, int b)
{
	return  pow(a, b);
}



int main()
{
	int a, b;

	readAB(a, b);
	cout << Outputs(a, b) << endl;
}