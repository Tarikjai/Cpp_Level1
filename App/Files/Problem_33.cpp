#include <iostream>
#include <string>
using namespace std;


int readGrade()
{
	int Grade;
	cout << "Enter your Grade: " << endl;
	cin >> Grade;
	return Grade;
}

void printResult(int grade)
{
	if (grade >= 90 && grade <= 100)
		cout << "A";
	else if (grade >= 80 && grade <= 89)
		cout << "B";
	else if (grade >= 70 && grade <= 79)
		cout << "C";
	else if (grade >= 60 && grade <= 69)
		cout << "D";
	else if (grade >= 50 && grade <= 59)
		cout << "E";
	else
		cout << "F";
}



int main()
{
	int grade = readGrade();

	printResult(grade);

}