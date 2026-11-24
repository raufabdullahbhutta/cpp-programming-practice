#include <iostream>
using namespace std;
int main ()
{
    int sub1, sub2, sub3;
    cout<< "Enter marks of three subjects.";
    cin>>sub1 >>sub2 >>sub3;
    if (sub1 >= 40 && sub2 >= 40 && sub3 >= 40) {
        cout<< "You are passed.";
    }
    else
    cout<< "You are fail.";
    return 0;
}