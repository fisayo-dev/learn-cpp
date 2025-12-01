#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    string name, courseName, locationName;
    bool isCU;
    int course, location;
    int days = 0, regFee = 0, lodgingPerDay = 0;

    // Random generator
    srand(time(0));

    // ---- INPUTS ----
    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Is CU student? (1=true, 0=false): ";
    cin >> isCU;

    cout << "Enter course (1-5): ";
    cin >> course;

    cout << "Enter location (1-5): ";
    cin >> location;

    // ---- COURSE MAPPING ----
    if (course == 1) {
        courseName = "Photography";
        days = 3;
        regFee = 10000;
    }
    else if (course == 2) {
        courseName = "Painting";
        days = 5;
        regFee = 8000;
    }
    else if (course == 3) {
        courseName = "Fish Farming";
        days = 7;
        regFee = 15000;
    }
    else if (course == 4) {
        courseName = "Baking";
        days = 5;
        regFee = 13000;
    }
    else if (course == 5) {
        courseName = "Public Speaking";
        days = 2;
        regFee = 5000;
    }
    else {
        cout << "Invalid course!";
        return 0;
    }

    // ---- LOCATION MAPPING ----
    if (location == 1) {
        locationName = "Camp House A";
        lodgingPerDay = 10000;
    }
    else if (location == 2) {
        locationName = "Camp House B";
        lodgingPerDay = 2500;
    }
    else if (location == 3) {
        locationName = "Camp House C";
        lodgingPerDay = 5000;
    }
    else if (location == 4) {
        locationName = "Camp House D";
        lodgingPerDay = 13000;
    }
    else if (location == 5) {
        locationName = "Camp House E";
        lodgingPerDay = 5000;
    }
    else {
        cout << "Invalid location!";
        return 0;
    }

    // ---- COST CALCULATIONS ----
    double lodgingCost = lodgingPerDay * days;
    double regDiscount = 0;
    double lodgingDiscount = 0;

    // CU student discount (5% on lodging)
    if (isCU && (location == 1 || location == 2)) {
        lodgingDiscount = 0.05 * lodgingCost;
        lodgingCost -= lodgingDiscount;
    }

    // Long course or expensive course discount (3% on registration)
    if (days > 5 || regFee > 12000) {
        regDiscount = 0.03 * regFee;
        regFee -= regDiscount;
    }

    // Random promo
    int r = (rand() % 100) + 1;
    int promo = 0;

    if (r == 7 || r == 77) {
        promo = 500;
    }

    double total = regFee + lodgingCost - promo;

    // ---- OUTPUT ----
    cout << "\n-----------------------------------------\n";
    cout << "Name: " << name << "   (CU student: " << (isCU ? "Yes" : "No") << ")\n";
    cout << "Course: " << courseName << "   Days: " << days << "\n";
    cout << "Registration: ₦" << regFee << "  (reg discount: ₦" << (int)regDiscount << ")\n";
    cout << "Lodging: ₦" << lodgingPerDay << " × " << days 
         << " = ₦" << (int)lodgingCost << "  (lodging discount: ₦" 
         << (int)lodgingDiscount << ")\n";
    cout << "Random draw: " << r << "  Promo applied: ₦" << promo << "\n";
    cout << "TOTAL: ₦" << (int)total << "\n";
    cout << "-----------------------------------------\n";

    return 0;
}