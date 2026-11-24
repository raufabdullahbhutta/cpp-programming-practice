# include <iostream>
using namespace std;
int main()
{
    int pages, cost_per_page, total;
    cout<< "please enter no of pages." << endl;
    cin>> pages;
    cout<< "please enter of cost of per page." << endl;
    cin>> cost_per_page;
    total = pages * cost_per_page;
    cout<< "The total cost is: RS. " << total << endl;
    return 0;
}