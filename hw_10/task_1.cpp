#include <iostream>
#include <cmath>  // sqrt()
using namespace std;

void func(double a, double b) {
    if (a != 0) {
        double x = -b / a;
        cout << "The root of the equation: x = " << x << endl;
    }
    else if (b != 0) {
        cout << "No roots" << endl;
    }
    else {
        cout << "numerous roots" << endl;
    }
}

void func(double a, double b, double c) {
    if (a == 0) {
        // Якщо a = 0, то рівняння буде лінійне
        func(b, c);
        return;
    }

    double discriminant = b*b - 4 * a * c;
    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Two different roots: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "One root: x = " << x << endl;
    }
    else {
        cout << "No roots (D < 0)" << endl;
    }
}


int main() {
    func(2, 4); // 2x + 4 = 0

    func(1, -3, 2); // x^2 - 3x + 2 = 0
}
