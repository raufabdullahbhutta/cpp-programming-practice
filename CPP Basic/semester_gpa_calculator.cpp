# include <iostream> 
using namespace std;
int main()
{
    int sub1, sub2, sub3, average;
    cout<< "Please enter the marks of subject 1" << endl;
    cin>> sub1;
    cout<< "please enter the marks of subject 2" << endl;
    cin>> sub2;
    cout<< "Please enter the marks of subject 3" << endl;
    cin>> sub3;
    average = (sub1 + sub2 + sub3) / 3;
    cout<< "The average is : " << average << endl;
return 0;
}