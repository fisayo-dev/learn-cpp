#include <iostream>
#include <string>

using namespace std;

int main() 
{

    string name;
    bool ISCUstudent;
 
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Are you a CU student? (True or false): ";
    int flag;
    cin >> flag;
    ISCUstudent = (flag != 0);

    return 0;
}