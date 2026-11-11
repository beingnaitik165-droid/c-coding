#include <iostream>
using namespace std;

int main()
{
    char type;
    float amount, discount, finalAmount;

    cout << "Enter membership (M/G): ";
    cin >> type;

    cout << "Enter purchase amount: ";
    cin >> amount;

    if(type == 'M')
    {
        if(amount >= 1000)
            discount = amount * 20 / 100;
        else
            discount = amount * 10 / 100;
    }
    else if(type == 'G')
    {
        if(amount >= 1000)
            discount = amount * 5 / 100;
        else
            discount = 0;
    }
    else
    {
        cout << "Invalid Membership";
        return 0;
    }

    finalAmount = amount - discount;

    cout << "Discount = " << discount << endl;
    cout << "Final Amount = " << finalAmount;

    return 0;
}