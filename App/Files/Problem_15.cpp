#include <iostream>
#include <string>
using namespace std;


void readAB(int& a, int& b)
{
	cout << "Please enter a: " << endl;
	cin >> a;
	cout << "Please enter b: " << endl;
	cin >> b;
}

float RectangleArea(int a, int b)
{
	return a * b;
}



int main()
{
	int a, b;
	readAB(a, b);
	cout << RectangleArea(a, b) << endl;
}