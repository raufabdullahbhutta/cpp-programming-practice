#include <iostream>
#include <string>
using namespace std;
int main()
{
    string username, password;
    cout<< "Enter your username" ;
    cin>> username;
    if (username == "admin") {
        cout<< "Enter your password." ;
        cin>> password;
        if (password == "1234")
        cout<< "Login Successful." ;
        else
        cout<< "Please enter correcr password." ;
    }
    else
    cout<< "Please enter correct username." ;
    return 0;
}