#include <iostream>
using namespace std;

int main() {
    int power = 1;
    for (int exp = 1; exp <= 8; exp++) {
        power *= 2;
        cout << "2^" << exp << " = " << power << endl;
    }
    return 0;
}
