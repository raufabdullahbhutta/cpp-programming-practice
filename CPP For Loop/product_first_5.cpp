#include <iostream>
using namespace std;

int main() {
    long long product = 1;
    for (int i = 1; i <= 5; i++) {
        product *= i;
        cout << "After multiplying by " << i << ", product = " << product << endl;
    }
    cout << "Final product of 1 to 5 = " << product << endl;
    return 0;
}
