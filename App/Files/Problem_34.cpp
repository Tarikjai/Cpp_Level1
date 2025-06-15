#include <iostream>
#include <string>
using namespace std;


int readTotalSales()
{
	int TotalSales;
	cout << "Enter your TotalSales: " << endl;
	cin >> TotalSales;
	return TotalSales;
}

void printResult(int TotalSales)
{
	if (TotalSales > 1000000)
		cout << (1 * TotalSales) / 100;
	else if (TotalSales > 500000 && TotalSales <= 1000000)
		cout << (2 * TotalSales) / 100;
	else if (TotalSales > 100000 && TotalSales <= 500000)
		cout << (3 * TotalSales) / 100;
	else if (TotalSales > 50000 && TotalSales <= 100000)
		cout << (5 * TotalSales) / 100;
	else
		cout << "0";
}



int main()
{
	int  TotalSales = readTotalSales();

	printResult(TotalSales);



}