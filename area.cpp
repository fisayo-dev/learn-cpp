#include <iostream>

using namespace std;

int main () 
{
    // Read in radius
    double radius;
    double area;

    float PI = 3.142857142857143;
    
    // Assign value to radius
    radius = 23;

    // Calculate area pf circle
    area = radius * radius * PI;

    // Print area
    cout << "The area of the circle is " << area;
    return 0;
}