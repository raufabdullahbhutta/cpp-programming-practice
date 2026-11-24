#include <iostream>
using namespace std;

int main() {
    double score, sum = 0.0;

    for (int i = 1; i <= 4; i++) {
        cout << "Enter score " << i << ": ";
        cin >> score;
        sum += score;
        cout << "Running total after score " << i << ": " << sum << endl;
    }

    double average = sum / 4.0;
    cout << "Average score: " << average << endl;
    return 0;
}
