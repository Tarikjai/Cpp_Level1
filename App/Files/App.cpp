#include <iostream>
#include <string>
using namespace std;


int input(int& N)
{
	cout << "Insert the input Number: ";
	cin >> N;
	return  N;
}

void print(int N)
{
	int i=1;
	while (i <= N)
	{
		cout << i << endl;
		i++;
	}
}


int main()
{
	int N=0;
	input(N);
	print(N);
}