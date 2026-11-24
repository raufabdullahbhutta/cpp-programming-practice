#include <iostream>
using namespace std;

int main() {
    int weeklySaving = 5;
    int totalSavings = 0;

    for (int week = 1; week <= 12; week++) {
        totalSavings += weeklySaving;
        cout << "Week " << week << ": Total savings = " << totalSavings << endl;
    }
    return 0;
}
