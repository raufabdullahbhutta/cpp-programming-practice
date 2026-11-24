#include <iostream>
using namespace std;
int main()
{
    float total_bill, discount, final_bill;
    cout<< "Enter the total bill." ;
    cin>> total_bill;
    if (total_bill >= 10000) {
        discount = ( total_bill * 15) / 100;
        final_bill = total_bill - discount;
        cout<< "Discount applied: Your total bill is. RS: " << final_bill ;
    }
    else
    cout<< "No Discount: Your total bill is. RS: " << total_bill ;
    return 0;
}