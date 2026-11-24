#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer N: ";
    cin >> n;

    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
        cout << "Added " << i << ", current sum: " << sum << endl;
    }
    cout << "Final sum from 1 to " << n << " = " << sum << endl;
    return 0;
}
