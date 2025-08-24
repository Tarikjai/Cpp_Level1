#include <iostream>
#include <string>
using namespace std;



enum enMonthDay {
    Janvier = 1,
    Fevrier = 2,
    Mars = 3,
    Avril = 4,
    Mai = 5,
    Juin = 6,
    Juillet = 7,
    Aout = 8,
    Septembre = 9,
    Octobre = 10,
    Novembre = 11,
    Decembre = 12
};

void ShowMonth()
{
    cout << "********************" << endl;
    cout << "       Months       " << endl;
    cout << "********************" << endl;
    cout << " * 1 : Janvier * " << endl;
    cout << " * 2 : Fevrier * " << endl;
    cout << " * 3 : Mars * " << endl;
    cout << " * 4 : Avril * " << endl;
    cout << " * 5 : Mai * " << endl;
    cout << " * 6 : Juin * " << endl;
    cout << " * 7 : Juillet * " << endl;
    cout << " * 8 : Aout * " << endl;
    cout << " * 9 : Septembre * " << endl;
    cout << " * 10 : Octobre * " << endl;
    cout << " * 11 : Novembre * " << endl;
    cout << " * 12 : Decembre * " << endl;
    cout << "********************" << endl;
    cout << "Please choose a month Number: " << endl;
}

enMonthDay ReadMonth()
{
    enMonthDay  monthDay;
    int MD;
    cin >> MD;
    return (enMonthDay)MD;

} 

string printResult(enMonthDay  monthDay)
{
    switch (monthDay)
    {
    case enMonthDay::Janvier:
        return "Janvier\n";
    case enMonthDay::Fevrier:
        return "Février\n";
    case enMonthDay::Mars:
        return "Mars\n";
    case enMonthDay::Avril:
        return "Avril\n";
    case enMonthDay::Mai:
        return "Mai\n";
    case enMonthDay::Juin:
        return "Juin\n";
    case enMonthDay::Juillet:
        return "Juillet\n";
    case enMonthDay::Aout:
        return "Août\n";
    case enMonthDay::Septembre:
        return "Septembre\n";
    case enMonthDay::Octobre:
        return "Octobre\n";
    case enMonthDay::Novembre:
        return "Novembre\n";
    case enMonthDay::Decembre:
        return "Decembre\n";
    default:
        return "Invalid Month\n";


    }
}


int main()
{
    ShowMonth();
    cout << "You choose " << printResult(ReadMonth());

}