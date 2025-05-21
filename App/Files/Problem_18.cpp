#include <iostream>
#include <string>
using namespace std;


void readr(float& r)
{
	cout << "Please enter r: " << endl;
	cin >> r;
}

float CercleArea(float p, float r)
{
	return p * pow(r, 2);
}



int main()
{
	float p = 3.14;
	float r;
	readr(r);
	cout << CercleArea(p, r) << endl;
}