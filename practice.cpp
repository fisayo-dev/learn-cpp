#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You're an adult." << endl;
    } else if (age = 17) {
        cout << "You're almost an adult." << endl;
    }
     else if (age >= 13) {
        cout << "You're a teenager." << endl;
    } else {
        cout << "You're still a minor." << endl;
    }

    return 0;
}
