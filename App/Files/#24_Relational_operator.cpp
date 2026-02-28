#include <iostream>
using namespace std;

void readAnswer(int& A, int& B)
{


    cout << "Please enter the first number A: " << endl;
    cin >> A;
    cout << "Please enter the first number B: " << endl;
    cin >> B;

}

void printAnswers(int A, int B)
{
    cout << (A == B) << endl;
}

int main()
{
    int A, B;
    readAnswer(A, B);
    printAnswers(A, B);
}
