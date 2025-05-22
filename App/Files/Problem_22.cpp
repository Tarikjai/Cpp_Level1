#include <iostream>
#include <string>
using namespace std;


void readAB(float& a, float& b)
{
	cout << "Please enter a: " << endl;
	cin >> a;
	cout << "Please enter b: " << endl;
	cin >> b;
}

float IsoscelesTriangle(float a, float b, float p)
{
	return (p * b * b / 4) * ((2 * a - b) / (2 * a + b));
}



int main()
{
	float a, b;
	float p = 3.14159;
	readAB(a, b);
	cout << IsoscelesTriangle(a, b, p) << endl;
}