#include <iostream>
using namespace std;

#define IS_LEAP_YEAR(year) (((year) % 4 == 0 && (year) % 100 != 0) || (year) % 400 == 0)

#define HALF_PERIMETER(a, b, c) ( ((a) + (b) + (c)) / 2.0)

#define IS_TRIANGLE(a, b, c) ( ((a) + (b) > (c)) && ((a) + (c) > (b)) && ((b) + (c) > (a)))

#define PRINT_LINE(length, symbol) { \
    for (int i = 0; i < (length); i++) { \
        cout << (symbol); \
    } \
    cout << endl; \
}

#define DISTANCE(x1, y1, z1, x2, y2, z2) (std::sqrt(std::pow((x2) - (x1), 2) + std::pow((y2) - (y1), 2) + std::pow((z2) - (z1), 2)))


#define POW(res, num, power) for (int i = 0; i < power; i++) \
    res *= num


int main() {
    int year = 2024;
    cout << "Year " << year << " is " << (IS_LEAP_YEAR(year) ? "a leap year" : "not a leap year") << endl;

    double a = 3, b = 4, c = 5;
    cout << "Half-perimeter of the triangle: " << HALF_PERIMETER(a, b, c) << endl;

    cout << "Can the sides " << a << ", " << b << ", " << c << " form a triangle? "
        << (IS_TRIANGLE(a, b, c) ? "Yes" : "No") << endl;

    PRINT_LINE(10, '*');

    double x1 = 0, y1 = 0, z1 = 0, x2 = 3, y2 = 4, z2 = 5;
    cout << "Distance between points (" << x1 << ", " << y1 << ", " << z1 << ") and (" << x2 << ", " << y2 << ", " << z2 << ") is "
        << DISTANCE(x1, y1, z1, x2, y2, z2) << endl;

    int res = 1;
    int base = 9;
    int power = 2;
    cout << "Power of " << base << " raised to " << power << " is ";
    POW(res, base, power);
    cout << res << endl;
}