#include <iostream>
#include <string>
using namespace std;


void readAB(float& a, float& b, float& c)
{
	cout << "Please enter a: " << endl;
	cin >> a;
	cout << "Please enter b: " << endl;
	cin >> b;
	cout << "Please enter c: " << endl;
	cin >> c;
}

float IsoscelesTriangle(float a, float b, float c)
{
	double PI = 3.14159265358979323846;
	double p = (a + b + c) / 2;


	return  PI * pow((a * b * c) / (4.0 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
}




int main()
{
	float a, b, c;

	readAB(a, b, c);
	cout << IsoscelesTriangle(a, b, c) << endl;
}