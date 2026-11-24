#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 2;

    // Integer division (decimal part is truncated)
    cout << "Integer division (5 / 2): " << (a / b) << endl;

    // Implicit type casting (int converted to double)
    double implicitResult = a;
    cout << "Implicit casting (int to double): " << implicitResult << endl;

    // Explicit type casting using static_cast
    double explicitResult = static_cast<double>(a) / b;
    cout << "Explicit casting (5.0 / 2): " << explicitResult << endl;

    return 0;
}
