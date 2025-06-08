#include <iostream>
#include <string>
using namespace std;

int AskMark()
{
	int Mark;
	cout << "Please enter your Mark: " << endl;
	cin >> Mark;
	return Mark;
}





void PrintResult(int Mark)
{

	if (Mark >= 50)
	{
		cout << "Pass";
	}
	else {
		cout << "Fail";
	}


}

int main()
{

	int Mark = AskMark();

	PrintResult(Mark);

}
