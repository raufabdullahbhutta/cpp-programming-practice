#include <iostream>
using namespace std;
int main ()
{
    int speed;
    cout<< "Enter the speed of a vehicle." ;
    cin>> speed;
    if (speed > 80) {
        cout<< "Over-Speeding Fine Applicable." ;
    }
    else
    cout<< "Speed Within Limit." ;
    return 0;
 }