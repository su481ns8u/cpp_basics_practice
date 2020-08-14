#include <iostream>
using namespace std;

int main()
{
    int month, day, flag = 0;
    cout << "Enter day: ";
    cin >> day;
    cout << "Enter month: ";
    cin >> month;

    switch (month)
    {
    case 3:
        if (day >= 20 && day <= 31)
            flag = 1;
        break;
    case 4:
        if (day >= 1 && day <= 30)
            flag = 1;
        break;
    case 5:
        if (day >= 1 && day <= 31)
            flag = 1;
        break;
    case 6:
        if (day >= 1 && day <= 20)
            flag = 1;
        break;
    default:
        if (month > 12)
            cout << "Invalid month !";
        break;
    }
    if (flag == 1)
        cout << "True !";
    else
        cout << "False !!";
}