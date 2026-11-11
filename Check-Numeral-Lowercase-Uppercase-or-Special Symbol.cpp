#include <iostream>
using namespace std;

int main()
{
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if(ch >= '0' && ch <= '9')
        cout << "Numeral";
    else if(ch >= 'A' && ch <= 'Z')
        cout << "Uppercase Alphabet";
    else if(ch >= 'a' && ch <= 'z')
        cout << "Lowercase Alphabet";
    else
        cout << "Special Symbol";

    return 0;
}