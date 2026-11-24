#include <iostream>
using namespace std;
int main ()
{
    int tuition_fee, examination_fee, total_fee;
    cout<< "Please enter your tuition fee." << endl;
    cin>> tuition_fee;
    cout<< "Please enter your examination fee." << endl;
    cin>> examination_fee;
total_fee = tuition_fee + examination_fee;
cout<< "total fee: " << total_fee << endl;
return 0;
}