#include <iostream>
#include <string>
using namespace std;


void readr(float& a)
{
	cout << "Please enter r: " << endl;
	cin >> a;
}

float CercleArea(float p, float a)
{
	return (p * pow(a, 2)) / 4;

}



int main()
{
	float p = 3.14;
	float a;
	readr(a);
	cout << CercleArea(p, a) << endl;
}
