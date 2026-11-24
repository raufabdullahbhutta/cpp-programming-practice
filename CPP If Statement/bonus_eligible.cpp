#include <iostream>
using namespace std;
int main ()
{
    int salary;
    cout<< "Enter your salary:" ;
    cin>> salary;
    if (salary < 50000 ) {
        cout<< "you are eligible for bonous." ;
    }
    return 0;
}