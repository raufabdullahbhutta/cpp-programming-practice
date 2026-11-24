# include <iostream>
using namespace std;
int main ()
{
    int book1, book2, book3, total_cost;
    cout<< "please enter the price of book 1." << endl;
    cin>> book1;
    cout<< "please enter the price of book 2." << endl;
    cin>> book2;
    cout<< "please enter the price of book 3." << endl;
    cin>> book3;
    total_cost = book1 + book2 + book3;
    cout<< "Total cost is: RS. " << total_cost << endl;
    return 0;
}