#include <iostream>
using namespace std;

int main()
{
    int n, x, y, z;

    cout << "Enter N: ";
    cin >> n;

    cout << "Enter x and y: ";
    cin >> x >> y;

    switch(n)
    {
        case 1:
            z = 2*x + 3*y + 7;
            cout << "Z = " << z;
            break;

        case 2:
            z = x*x + 2*y*y*y - 19;
            cout << "Z = " << z;
            break;

        case 3:
            z = 3*x*x*x + y*y*y*y + 34;
            cout << "Z = " << z;
            break;

        case 4:
            z = 5*x*x - 2*y*y - 2;
            cout << "Z = " << z;
            break;

        default:
            cout << "Invalid N";
    }

    return 0;
}