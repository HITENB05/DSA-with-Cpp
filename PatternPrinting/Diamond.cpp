#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n:";
    cin >> n;

    // Upper half (pyramid) - rows 1 to n
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // padding, matches width of "* "
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    // Lower half (inverted pyramid) - rows n-1 down to 1
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}