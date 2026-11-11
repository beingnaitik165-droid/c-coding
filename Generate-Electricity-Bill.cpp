#include <iostream>
using namespace std;

int main()
{
    int unit;
    float rate, rental, bill, gst, total;

    cout << "Enter electricity units: ";
    cin >> unit;

    if(unit < 0)
    {
        cout << "Invalid Units";
        return 0;
    }
    else if(unit <= 100)
    {
        rate = 3.10;
        rental = 120;
    }
    else if(unit <= 200)
    {
        rate = 4.10;
        rental = 160;
    }
    else if(unit <= 300)
    {
        rate = 5.20;
        rental = 210;
    }
    else if(unit <= 400)
    {
        rate = 6.15;
        rental = 260;
    }
    else
    {
        rate = 8.25;
        rental = 310;
    }

    bill = unit * rate + rental;
    gst = bill * 18 / 100;
    total = bill + gst;

    cout << "Basic Bill = " << bill << endl;
    cout << "GST = " << gst << endl;
    cout << "Total Bill = " << total;

    return 0;
}