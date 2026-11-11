#include <iostream>
using namespace std;

int main()
{
    char gender;
    int age;

    cout << "Enter gender (M/F): ";
    cin >> gender;

    cout << "Enter age: ";
    cin >> age;

    if(gender == 'M')
    {
        if(age >= 21)
            cout << "Eligible for Marriage";
        else
            cout << "Not Eligible for Marriage";
    }
    else if(gender == 'F')
    {
        if(age >= 18)
            cout << "Eligible for Marriage";
        else
            cout << "Not Eligible for Marriage";
    }
    else
        cout << "Invalid Gender";

    return 0;
}