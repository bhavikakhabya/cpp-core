#include <iostream>
using namespace std;

int main() {
    int a;
    int b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a > b) 
        cout << "First number is greater than second number" << endl;
    
    else 
        if (a < b) 
            cout << "First number is smaller than second number" << endl;
        
        else 
            cout << "Both numbers are equal" << endl;

 return 0;
}