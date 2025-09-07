#include <iostream>
#include <string>
using namespace std;


int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };




int main()
{

	for (int i = 0; i < 10; i++)
	{
		cout << " We are at iteration " << i << endl;
		if (arr[i] == 20)
		{
			cout << i +1 << endl;
			break;
		}
		 
	}
 

}