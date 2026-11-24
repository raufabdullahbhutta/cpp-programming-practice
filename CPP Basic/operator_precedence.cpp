#include <iostream>
using namespace std;

int main() {
    int resultWithoutParentheses = 10 + 5 * 2;
    int resultWithParentheses = (10 + 5) * 2;
    int mixedExpression = 20 - 6 / 2 + 3 * 4;

    cout << "10 + 5 * 2 = " << resultWithoutParentheses << endl;
    cout << "(10 + 5) * 2 = " << resultWithParentheses << endl;
    cout << "20 - 6 / 2 + 3 * 4 = " << mixedExpression << endl;

    return 0;
}
