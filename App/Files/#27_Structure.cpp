
#include <iostream>
using namespace std;

struct ProInfo
{
    int MonthlySalary;
    int YearlySalary;
};


struct PersonnelInfo
{
    string Name;
    int Age;
    string City;
    string Country;
    string Gender;
    bool Married;
    ProInfo pro;

};




int main()
{
    PersonnelInfo Person1;
    Person1.Name = "Hmida";
    Person1.pro.MonthlySalary = 1000;


    cout << "******************************** " << endl;

    cout << "Name: " << Person1.Name << endl;
    cout << "Name: " << Person1.pro.MonthlySalary << endl;

    cout << "********************************" << endl;

}
