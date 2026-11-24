#include <iostream>
using namespace std;
int main ()
{
    int num;
    cout<< "Enter a number." ;
    cin>> num;
    if (num > 0) {
        if (num % 2 == 0) {
            cout<< "The number is even";
        }
        else
        cout<< "The number is Odd" ;
    }
    else
    cout<< "Please enter postive number." ;
    return 0;
}