#include <iostream>
using namespace std;

int main()
{
    float per;

    cout << "Enter percentage: ";
    cin >> per;

    if(per < 0 || per > 100)
        cout << "Invalid Percentage";
    else if(per >= 90)
        cout << "Grade A1";
    else if(per >= 80)
        cout << "Grade A2";
    else if(per >= 70)
        cout << "Grade B1";
    else if(per >= 60)
        cout << "Grade B2";
    else if(per >= 50)
        cout << "Grade C";
    else if(per >= 40)
        cout << "Grade D";
    else if(per >= 30)
        cout << "Grade E";
    else
        cout << "Grade F";

    return 0;
}