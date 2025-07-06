#include <iostream>
#include <string>
using namespace std;

;
enum enColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

int  readAnswer(int& c)
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
	enColor color;

	color = (enColor)c;

	if (color == enColor::Red) {
		system("color 4F");
	}
	else if (color == enColor::Blue) {
		system("color 1F");
	}
	else if (color == enColor::Green) {
		system("color 2F");
	}
	else if (color == enColor::Yellow) {
		system("color 6F");
	}
}



int main()
{
	int c;
	readAnswer(c);
	printResult(c);

}