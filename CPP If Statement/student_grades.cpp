#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout<< "Enter your marks." ;
    cin>> marks;
    if (marks >= 50) {
        if (marks >= 80) {
            cout<< "Excellent" ;
        }
        else
        cout<< "Pass";
    }
    else 
    cout<< "You are fail." ;
    return 0;
}