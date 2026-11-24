# include <iostream> 
using namespace std;
int main()
{
    int total_classes, attended_classes, percentage;
    cout<< "Please enter total classes." << endl;
    cin>> total_classes;
    cout<< "Please enter attended classes." << endl;
    cin>> attended_classes;
percentage = (attended_classes * 100) / total_classes;
cout<< "Your attendance is: " << percentage << endl;
return 0;
}