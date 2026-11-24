#include <iostream>
using namespace std;
int main ()
{
    int selling_price, cost_price;
    cout<< "Enter selling price";
    cin>> selling_price;
    cout<< "Enter cost price";
    cin>> cost_price;
    if ( selling_price > cost_price) {
        cout<< "You are in profit";
    }
    else if (selling_price < cost_price) {
        cout<< "You are in loss.";
    }
    else
    cout<< "No Profit, No loss";
    return 0;
}