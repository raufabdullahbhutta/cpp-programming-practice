#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int times;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "How many times do you want to print it? ";
    cin >> times;

    for (int i = 1; i <= times; i++) {
        cout << i << ": " << name << endl;
    }
    return 0;
}
