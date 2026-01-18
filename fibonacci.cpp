#include <iostream>
using namespace std;

int main() {
    int t1 = 0, t2 = 1, nextTerm;

    cout << "Fibonacci Series up to 10 terms: " << endl;

    for (int i = 1; i <= 10; i++) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}