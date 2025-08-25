#include <iostream>
#include <string>
using namespace std;

void readArray(int array[10], int& length)
{
	cout << "Please insert the number desired: " << endl;
	cin >> length;

	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Please insert the [" << i + 1 << "] number: " << endl;
		cin >> array[i];
	}

}

void PrintArray(int array[10], int length)
{
	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Number [" << i + 1 << "] is: " << array[i] << endl;
	}
}

int calculateSum(int array[10], int length)
{
	int sum = 0;
	for (int i = 0; i <= length - 1; i++)
	{
		sum += array[i];
	}

	return sum;
}

float CalculateAverage(int array[10], int length)
{
	int sum = 0;
	int average = 0;
	for (int i = 0; i <= length - 1; i++)
	{
		sum += array[i];
	}
	return sum / (length);
}

int main()
{
	int array[10], length = 0;

	readArray(array, length);
	PrintArray(array, length);
	cout << "Sum is: " << calculateSum(array, length) << endl;
	cout << "Average is: " << CalculateAverage(array, length) << endl;
}