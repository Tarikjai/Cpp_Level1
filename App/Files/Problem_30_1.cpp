#include <iostream>
#include <string>
using namespace std;


void input(int& N)
{

	cout << "Please insert N: ";
	cin >> N;
	while (N <= 1)
	{
		cout << "Please insert N: ";
		cin >> N;
	}

}

int Factorial(int N)
{
	int i = N - 1, sum = N;


	while (i > 1)
	{
		sum *= i;
		i--;
	}
	return sum;
}

int main()
{
	int N = 0;
	input(N);
	cout << Factorial(N);
}