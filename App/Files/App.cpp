#include <iostream>
#include <string>
using namespace std;


void input(int& N)
{
	cout << "Please insert N: ";
	cin >> N;
}

int Factorial(int N)
{
	int sum =0;

	while (N != -99)
	{
		sum += N;
		input(N);
	}
	return sum;
}

int main()
{
	int N = 0;
	input(N);
	cout << Factorial(N);
}