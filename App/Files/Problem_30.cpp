#include <iostream>
#include <string>
using namespace std;

int readN(int& N)
{
	cout << "Please enter N: " << endl;
	cin >> N;
	return N;
}

void printNumbers(int N, int sum)
{
	for (int i = N; i >= 1; i--)
	{
		sum *= i;

	}
	cout << sum << endl;
}

int main()
{
	int N;
	int sum = 1;

	readN(N);

	cout << endl;

	printNumbers(N, sum);
}