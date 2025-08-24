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
	for (int i =1 ; i <= N ; i++)
	{
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	cout << sum << endl;
}

int main()
{
	int N;
	int sum = 0;

	readN(N);

	cout << endl;

	printNumbers(N , sum);
}