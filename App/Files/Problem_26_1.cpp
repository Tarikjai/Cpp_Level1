#include <iostream>
#include <string>
using namespace std;


int readN(int& N)
{
	cout << "Please enter N: " << endl;
	cin >> N;
	return N;
}

void printNumbers(int N)
{
	for (int i = 1; i <= N; i++)
	{
		cout << i << endl;
	}
}


int main()
{
	int N;

	readN(N);
	cout << endl;
	printNumbers(N);

}