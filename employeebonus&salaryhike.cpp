#include <iostream>
using namespace std;

int main()
{
    int service, rating;
    float salary, bonus;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter years of service: ";
    cin >> service;

    cout << "Enter annual rating: ";
    cin >> rating;

    if(service >= 5)
    {
        if(rating >= 4)
            bonus = salary * 20 / 100;
        else
            bonus = salary * 10 / 100;
    }
    else
    {
        if(rating < 5)
            bonus = salary * 5 / 100;
        else
            bonus = 0;
    }

    cout << "Bonus = " << bonus << endl;
    cout << "Total Salary = " << salary + bonus;

    return 0;
}