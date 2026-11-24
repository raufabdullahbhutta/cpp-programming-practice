#include <iostream>
using namespace std;

int main() {
    int score, passCount = 0, failCount = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter test score " << i << " (0 - 100): ";
        cin >> score;

        if (score >= 50) {
            passCount++;
            cout << "Score " << i << ": Pass" << endl;
        } else {
            failCount++;
            cout << "Score " << i << ": Fail" << endl;
        }
    }

    cout << "Total Passed: " << passCount << endl;
    cout << "Total Failed: " << failCount << endl;
    return 0;
}
