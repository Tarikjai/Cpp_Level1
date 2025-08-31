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
/*
#include <iostream>
#include <string>
using namespace std;


void readArray(int array[100], int& length)
{
	cout << "Merci de saisir le nombre de numeros: " << endl;
	cin >> length;

	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Merci de saisir le numero " << i + 1 << endl;
		cin >> array[i];
	}
}

void printArray(int array[100], int length)
{
	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Voici le numero [" << i + 1 << "]: " << array[i] << endl;

	}
}

int sumArray(int array[100], int length)
{
	int sum = 0;

	for (int i = 0; i <= length - 1; i++)
	{
		sum += array[i];
	}
	return sum;
}

float Average(int array[100], int length)
{
	int counter = 0;

	for (int i = 0; i <= length - 1; i++)
	{
		counter += 1;
	}
	return counter;
}


int main()
{
	int array[100], length = 0;
	readArray(array, length);
	printArray(array, length);
	cout << "The sum of all the numbers is: " << sumArray(array, length) << endl;
	cout << "The average is: " << sumArray(array, length) / Average(array, length);
}*/