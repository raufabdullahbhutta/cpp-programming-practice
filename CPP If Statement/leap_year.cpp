#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<< "Enter the Year:" ;
    cin>> year;
    if (year % 4 == 0) {
        cout<< "This is a leap Year." ;
    }
    else 
    cout<< "This is not a leap Year." ;
    return 0;
}