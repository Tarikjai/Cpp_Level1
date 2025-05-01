

#include <iostream>
using namespace std;

enum MaritalStatus { Single, Married };
enum Gender { Female, Male };

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
    enum Gender;
    bool Married;
    ProInfo pro;

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


    MaritalStatus status;
    Gender myGender;

    myGender = Gender::Male;

    status = MaritalStatus::Single;

    cout << "******************************** " << endl;

    cout << "Name: " << Person1.Name << endl;
    cout << "Age: " << Person1.Age << endl;
    cout << "City: " << Person1.City << endl;
    cout << "Country: " << Person1.Country << endl;

    cout << "MonthlySalary: " << Person1.pro.MonthlySalary << endl;
    cout << "YearlySalary: " << Person1.pro.YearlySalary << endl;
    cout << "Gender: " << myGender << endl;
    cout << "Married: " << status << endl;

    cout << "********************************" << endl;

}
