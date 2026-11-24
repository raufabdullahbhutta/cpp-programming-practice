#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 3) {
            cout << "Skipping 3 using continue" << endl;
            continue;
        }
        if (i == 8) {
            cout << "Stopping at 8 using break" << endl;
            break;
        }
        cout << "Current number: " << i << endl;
    }
    return 0;
}
