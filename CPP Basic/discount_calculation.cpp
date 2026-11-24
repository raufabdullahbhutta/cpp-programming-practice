# include <iostream>
using namespace std;
int main ()
{
    int orignal_price, discount_price, final_price;
    cout<< " Please enter the price." << endl;
     cin>> orignal_price;
     discount_price = (orignal_price * 10) / 100;
     final_price = orignal_price - discount_price;
     cout << "Discount amount is: RS. " << discount_price << endl;
    cout << "Your final Price is: RS. " << final_price << endl;
     return 0;
}