// Example program
#include <iostream>
#include <string>
using namespace std;

void readGrade(float x[3])
{
	cout << "Please Enter Grade1: " << endl;
	cin >> x[0];

	cout << "Please Enter Grade2: " << endl;
	cin >> x[1];

	cout << "Please Enter Grade3: " << endl;
	cin >> x[2];
}

float printAVGgrade(float x[3])
{
	return (x[0] + x[1] + x[2]) / 3;
}



int main()
{
	float x[3];
	readGrade(x);
	cout << printAVGgrade(x);

}
