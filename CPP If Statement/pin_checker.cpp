#include <iostream>
using namespace std;
int main()
{
    int stored_pin, entered_pin;
    cout<< "Enter your stored pin." ;
    cin>> stored_pin;
    cout<< "Enter your pin." ;
    cin>> entered_pin;
    if (stored_pin == entered_pin ) {
        cout<< "Login Successful." ;
    }
    else 
    cout<< "Incorrect Pin." ;
    return 0;
}