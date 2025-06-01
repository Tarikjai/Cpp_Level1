// Example program
#include <iostream>
#include <string>
using namespace std;

void readGrade(float Grades[])
{
	cout << "Please Enter Grade1: " << endl;
	cin >> Grades[0];

	cout << "Please Enter Grade2: " << endl;
	cin >> Grades[1];

	cout << "Please Enter Grade3: " << endl;
	cin >> Grades[2];
}

float printAVGgrade(float Grades[])
{
	return (Grades[0] + Grades[1] + Grades[2]) / 3;
}



int main()
{
	float Grades[3];
	readGrade(Grades);
	cout << printAVGgrade(Grades);

}
