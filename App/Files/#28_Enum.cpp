

#include <iostream>
using namespace std;

enum enMaritalStatus { Single, Married };
enum enGender { Female, Male };

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
    bool Married;
    ProInfo pro;
    enGender gender;
    enMaritalStatus maritalstatus;


};




int main()
{
    PersonnelInfo Person1;
    Person1.Name = "Hmida";
    Person1.Age = 36;
    Person1.City = "Paris";
    Person1.Country = "France";
    Person1.pro.MonthlySalary = 1000;
    Person1.pro.YearlySalary = 1000 * 12;
    Person1.gender = enGender::Male;
    Person1.maritalstatus = Single;

    /*
    gender = Gender::Male;

    status = MaritalStatus::Single;*/

    cout << "******************************** " << endl;

    cout << "Name: " << Person1.Name << endl;
    cout << "Age: " << Person1.Age << endl;
    cout << "City: " << Person1.City << endl;
    cout << "Country: " << Person1.Country << endl;

    cout << "MonthlySalary: " << Person1.pro.MonthlySalary << endl;
    cout << "YearlySalary: " << Person1.pro.YearlySalary << endl;
    cout << "Gender: " << Person1.gender << endl;
    cout << "Married: " << Person1.maritalstatus << endl;

    cout << "********************************" << endl;

}
