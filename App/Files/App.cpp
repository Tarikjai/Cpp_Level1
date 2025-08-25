#include <iostream>
#include <string>
using namespace std;

 
void readArray(int array[10],int& length)
{
	cout << "Saisir le nombre de numero de numeros: " << endl;
	cin >> length;

	for (int i = 0; i <= length -1; i++)
	{
		cout << "Merci de saisir le numero: " << i + 1 << endl;
		cin >> array[i];
	}
}

void printArray(int array[10], int length)
{
	cout << "Voici la liste des numero composant notre Array: " << endl;
	for (int i = 0; i <= length - 1; i++)
	{
		cout << array[i];
	}
}

int main()
{
	int array[10], length = 0;
	readArray(array, length);
	printArray(array, length);
	
}