#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout<< "Enter number 1" ;
    cin>> a;
    cout<< "Enter number 2" ;
    cin>> b;
    if (a>b) {
        cout<< "The number A is greater than B." ;
    }
    else if (a<b) {
        cout<< "The number B is greater than A." ;
    }
    else
    cout<< "Both numbers are equal." ;
    return 0;
}