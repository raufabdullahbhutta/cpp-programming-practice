# include <iostream>
using namespace std;
int main ()
{
    int total_sales, commission;
    cout << "Please enter the total sales." << endl;
    cin>> total_sales;
    commission = (total_sales * 5 ) / 100;
    cout<< " Your commission is: RS. " << commission << endl;
    return 0;
}