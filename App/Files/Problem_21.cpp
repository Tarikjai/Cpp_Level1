#include <iostream>
#include <string>
using namespace std;


void readr(float& L)
{
	cout << "Please enter L: " << endl;
	cin >> L;
}

float CercleArea(float p, float L)
{
	return  pow(L, 2) / (4 * p);

}



int main()
{
	float p = 3.14;
	float L;
	readr(L);
	cout << CercleArea(p, L) << endl;
}