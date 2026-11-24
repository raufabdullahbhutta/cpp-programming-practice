#include <iostream>
using namespace std;
int main()
{
    float data;
    cout<< "Enter data in GBs." ;
    cin>> data;
    if (data<1) {
        cout<< "Low Data Warning." ;
    }
    else
    cout<< "Sufficient Data." ;
    return 0;
}