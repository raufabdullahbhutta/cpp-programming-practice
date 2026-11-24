# include <iostream>
using namespace std;
int main ()
{
    int device_price, tax_percentage, tax_amount, final_price;
    cout<< "please the the cost of device." << endl;
    cin>> device_price;
    cout<< "please enter the tax percentage" << endl;
    cin>> tax_percentage;
    tax_amount =  (device_price * tax_percentage) / 100;
    final_price = device_price + tax_amount;
    cout<< "Tax amount is: RS. " << tax_amount << endl;
    cout<< "Your final price is: RS. " << final_price << endl;
    return 0;
}