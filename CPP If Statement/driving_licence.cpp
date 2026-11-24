#include <iostream>
using namespace std;
int main ()
{
    int age;
    char licence;
    cout<< "Enter your age." ;
    cin>> age;
    if (age >= 18) {
        cout<< "Do you have licence?" ;
        cin>> licence;
        if (licence == 'y')
        cout<< "You can legally drive." ;
        else
        cout<< "You need a licence to drive." ;
    }
    else
    cout<< "You are too young to drive." ;
    return 0;
}