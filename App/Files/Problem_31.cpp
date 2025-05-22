#include <iostream>
#include <string>
using namespace std;


void readr(float& N)
{
	cout << "Please enter N: " << endl;
	cin >> N;
}

void Outputs(float N)
{
	cout << pow(N, 2) << endl;
	cout << pow(N, 3) << endl;
	cout << pow(N, 4) << endl;
}



int main()
{

	float N;
	readr(N);
	Outputs(N);
}