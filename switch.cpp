#include <iostream>

using namespace std;

int main () 
{
    cout << "Enter a number (1-7) to get the corresponding day of the week: ";
    int day;
    cin >> day;

    switch (day) {
        case 1:
            cout << "Weekday";
            break;
        case 2:
            cout << "Weekday";
            break;
        case 3:
            cout << "Weekday";
            break;
        case 4:
            cout << "Weekday";
            break;
        case 5:
            cout << "Weekday";
            break;
        case 6:
            cout << "Weekend";
            break;
        case 7:
            cout << "Weekend";
            break;
        default:
            cout << "Invalid day";
    }

    return 0;
}
