#include <iostream>
using namespace std;
int main()
{
    int temp;
    cout<< "Enter the temperature:" ;
    cin>> temp;
    if (temp>40) {
        cout<< "Heat Alert." ;
    }
    else 
    cout<< "Temperature Normal." ;
    return 0;
}