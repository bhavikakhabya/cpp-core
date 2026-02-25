#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Proper divisors are: ";

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            cout << i << " ";
            sum = sum + i;
        }
    }

    cout << endl;
    cout << "Sum of proper divisors = " << sum << endl;

    if (sum == n) {
        cout << n << " is a Perfect Number";
    } else {
        cout << n << " is NOT a Perfect Number" << endl;
    }

    return 0;
}
