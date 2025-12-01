#include <iostream>
#include <string>

using namespace std;

const float PI = 3142829;

int main() 
{
    string name;
    cout <<  "Enter your name: ";
    getline(cin, name); // Alternative: cin >> name

    int age;
    string fullName = name + " Obadina";
    cout << "Enter your age: ";
    cin >> age; // Alternative: getline(cin, age)
    cout << "\n";
    cout << "Your name is " << fullName << endl;
    cout << "Your age is " << age << endl;
    cout << PI;

}