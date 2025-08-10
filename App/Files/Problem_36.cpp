#include <iostream>
#include <string>
using namespace std;


void readAnswer(int& Number1, int& Number2, char& OperationType)
{
	cout << "Please insert Number1: ";
	cin >> Number1;
	cout << "Please insert Number1: ";
	cin >> Number2;
	cout << "Please insert Operation Type: ";
	cin >> OperationType;
}

void printResult(int Number1, int Number2, char OperationType)
{


	switch (OperationType)
	{
	case '+':
		cout << Number1 + Number2;
		break;
	case '-':
		cout << Number1 - Number2;
		break;
	case '*':
		cout << Number1 * Number2;
		break;
	case '/':
		cout << Number1 / Number2;
		break;
	defaut:
		cout << "Try again";
	}
}



int main()
{
	int Number1, Number2;
	char OperationType;
	readAnswer(Number1, Number2, OperationType);
	printResult(Number1, Number2, OperationType);


}