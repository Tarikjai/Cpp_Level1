#include <iostream>
#include <string>
using namespace std;


void readArray(int array[100],  int& length)
{
	cout << "Merci de saisir le nombre de numeros: " << endl;
	cin >> length;

	for (int i = 0; i <= length -1 ; i++)
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


int main()
{
	int array[100], length = 0;
	readArray(array, length);
	printArray(array, length);
}