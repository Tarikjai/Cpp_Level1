#include <iostream>
#include <string>
using namespace std;

 
void readArray(int array[100], int& length)
{
	cout << "Please type the number of number: " << endl;
	cin >> length;

	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Please type number " << i + 1 << endl;
		cin >> array[i];
	}
}
void printArray()
{

}




int main()
{
	int array[100], length = 0;

	readArray(array, length);

	printArray();
}