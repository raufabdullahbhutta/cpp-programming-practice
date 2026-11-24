#include <iostream>
using namespace std;
int main()
{
    int balance, withdrawal;
    cout<< "Enter the balance of your account." ;
    cin>> balance;
    cout<< "Enter the withdrawal amount." ;
    cin>> withdrawal;
    if ( balance <= withdrawal) {
        cout<< "Transaction Allowed." ;
    }
    else 
    cout<< "Insufficient Balance." ;
    return 0;
}