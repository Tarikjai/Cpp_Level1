

#include <iostream>
#include <string>
using namespace std;


void mySumProcedure(int& Number1, int& Number2)
{

	cout << "Please enter Number1?" << endl;
	cin >> Number1;
	cout << endl;

	cout << "Please enter Number2?" << endl;
	cin >> Number2;
	cout << "************************" << endl;
	cout << Number1 + Number2 << endl;

}

int mySumFunction(int& Number1, int& Number2)
{


	cout << "Please enter Number1?" << endl;
	cin >> Number1;
	cout << endl;

	cout << "Please enter Number2?" << endl;
	cin >> Number2;
	cout << "************************" << endl;
	return Number1 + Number2;


}



int main()
{
	int Number1, Number2;
	mySumProcedure(Number1, Number2);

	cout << endl;
	cout << mySumFunction(Number1, Number2);
}