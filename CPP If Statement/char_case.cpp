#include <iostream>
using namespace std;
int main ()
{
    char ch;
    cout<< "Enter a character:" ;
    cin>> ch;
    if ( ch>= 'A' && ch<='Z') {
        cout<< "The character is capital." ;
    }
    else if ( ch>='a' && ch<= 'z') {
        cout<< "The character is small." ;
    }
    else
    cout<< "Invalid Characters!" ;
    return 0;
}