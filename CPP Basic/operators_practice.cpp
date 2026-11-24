#include <iostream>
using namespace std;

int main() {
    int x = 10, y = 3;

    // Arithmetic & modulo operators
    cout << "x + y = " << (x + y) << endl;
    cout << "x - y = " << (x - y) << endl;
    cout << "x * y = " << (x * y) << endl;
    cout << "x / y = " << (x / y) << endl;
    cout << "x % y (remainder) = " << (x % y) << endl;

    // Relational & logical operators
    cout << "(x > y && y > 0): " << ((x > y) && (y > 0)) << endl;
    cout << "(x == y || y == 3): " << ((x == y) || (y == 3)) << endl;
    cout << "!(x == y): " << (!(x == y)) << endl;

    // Pre-increment vs Post-increment
    int n = 5;
    cout << "Initial n: " << n << endl;
    cout << "Post-increment (n++): " << (n++) << " -> now n = " << n << endl;
    cout << "Pre-increment (++n): " << (++n) << " -> now n = " << n << endl;

    return 0;
}
