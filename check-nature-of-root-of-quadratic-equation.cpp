#include <iostream>
using namespace std;

int main()
{
    int a, b, c, D;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    D = b*b - 4*a*c;

    if(D > 0)
        cout << "Roots are Real and Distinct";
    else if(D == 0)
        cout << "Roots are Real and Equal";
    else
        cout << "Roots are Imaginary";

    return 0;
}