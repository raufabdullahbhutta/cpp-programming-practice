# include <iostream>
using namespace std;
int main ()
{
    int sub1, sub2, sub3, sub4, sub5, total_marks, percentage;
    cout<< "Please enter marks of subject 1." <<endl;
    cin>> sub1;
    cout<< "Please enter marks of subject 2." <<endl;
    cin>> sub2;
    cout<< "Please enter marks of subject 3." <<endl;
    cin>> sub3;
    cout<< "Please enter marks of subject 4." <<endl;
    cin>> sub4;
    cout<< "Please enter marks of subject 5." <<endl;
    cin>> sub5;
    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total_marks * 100) / 500;
    cout << "Total Marks: " << total_marks << endl;
cout << "Percentage: " << percentage << "%" << endl;
return 0;
}