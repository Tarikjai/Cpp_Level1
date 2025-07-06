#include <iostream>
#include <string>
using namespace std;

;
enum enColor { Red=1, Blue=2, Green=3, Yellow=4};

int  readAnswer(int &c)
{
	cout << "***********************" << endl;
	cout << "PLease Choose the number of your color " << endl;
	cout << "(1) Red" << endl;
	cout << "(2) Blue" << endl;
	cout << "(3) Green" << endl;
	cout << "(4) Yellow" << endl;
	cout << "***********************" << endl;

	cout << "Your choice ? " << endl;
	cin >> c;

	return c;
}

void printResult(int c)
{
	cout << c << endl;
}



int main()
{
	int c;
	readAnswer(c);
	printResult(c);


}