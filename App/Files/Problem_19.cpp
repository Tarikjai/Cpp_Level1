#include <iostream>
#include <string>
using namespace std;


void readr(float& D)
{
	cout << "Please enter r: " << endl;
	cin >> D;
}

float CercleArea(float p, float D)
{
	return (p * pow(D, 2)) / 4;
}



int main()
{
	float p = 3.14;
	float D;
	readr(D);
	cout << CercleArea(p, D) << endl;
}