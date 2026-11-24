#include <iostream>
using namespace std;

int main() {
    int evenCount = 0;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            evenCount++;
            cout << "Even #" << evenCount << ": " << i << endl;
        }
    }
    cout << "Total even numbers from 1 to 50: " << evenCount << endl;
    return 0;
}
