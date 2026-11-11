#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if(a > b)
    {
        if(a > c)
            cout << "Biggest = " << a;
        else
            cout << "Biggest = " << c;
    }
    else
    {
        if(b > c)
            cout << "Biggest = " << b;
        else
            cout << "Biggest = " << c;
    }

    return 0;
}