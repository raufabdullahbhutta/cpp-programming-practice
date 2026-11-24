#include <iostream>
using namespace std;
int main ()
{
    float bill;
    char late;
    cout<< "Enter the amount of bill.";
    cin>> bill;
    cout<< "If the bill paid after due date? (y/n)";
    cin>> late;
    if (late == 'y') {
        bill = bill + (bill * 0.05);
       cout<< "Your total bill with surcharge is: " <<bill;
    }
    else
    cout<< "Your bill is: " <<bill;
    return 0;
}