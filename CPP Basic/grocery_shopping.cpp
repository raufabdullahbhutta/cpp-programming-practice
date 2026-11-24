# include <iostream>
using namespace std;
int main ()
{
    int rice_price, rice_qty, sugar_price, sugar_qty, cooking_oil_price, cooking_oil_qty, total_bill;
    cout << "Please enter the price and quantity of rice (beech mein space de kar): " << endl;
cin >> rice_price >> rice_qty;
cout << "Please enter the price and quantity of sugar (beech mein space de kar): " << endl;
cin >> sugar_price >> sugar_qty;
cout << "Please enter the price and quantity of cooking oil (beech mein space de kar): " << endl;
cin >> cooking_oil_price >> cooking_oil_qty;
total_bill = (rice_price * rice_qty) + (sugar_price * sugar_qty) + (cooking_oil_price * cooking_oil_qty);
cout<< "The total bill is: RS. " << total_bill << endl;
return 0;
}