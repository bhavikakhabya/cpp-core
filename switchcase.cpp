#include <iostream>
using namespace std;

int main() {
    int day ;
    string dayName;
    cout << "Enter a number (1-7) for the day of the week: ";
    cin >> day;
    
    switch (day) {
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        case 7:
            dayName = "Sunday";
            break;
        default:
            dayName = "Invalid day";
    }

    cout << "The day is: " << dayName << endl;

    return 0;
}