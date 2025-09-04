#include <iostream>
#include <string>
using namespace std;


void input(int& N)
{
	cout << "Please insert N: ";
	cin >> N;
}

int sumFunction(int N)
{
	int i = 1, sum = 0;

	while (i <= N && i % 2 == 1)
	{
		sum += i;
		i += 2;
	}
	return sum;
}

int main()
{
	int N = 0;
	input(N);
	cout << sumFunction(N);
}