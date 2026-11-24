#include <iostream>
using namespace std;
int main ()
{
    int year,service_years;
    cout<< "Enter Employee Year of Service." ;
    cin>> year;
    service_years = 2025 - year;
    if (service_years > 5 ) {
        cout<< "Eligible for Bonus." ;
    }
    else 
    cout<< "Not eligible." ;
    return 0;
}