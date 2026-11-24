#include <iostream>
using namespace std;
int main ()
{
    int price, discount; 
    char card;
    cout<< "Enter the price." ;
    cin>> price;
    if (price > 5000) {
        cout<< "Do you have membership card?" ;
        cin>> card;
        if (card == 'y') {
            price = price - (price * 0.10) ;
            cout<< " Your total bill is " <<price ;
        }
         else
            cout<< "your total bill is" <<price ;
    }
    else
    cout<< "No Discount";
    return 0;
}