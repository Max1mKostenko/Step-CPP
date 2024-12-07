#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

    void reduce() {
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

public:
    Fraction(int num = 0, int denom = 1) : numerator(num), denominator(denom) {
        reduce();
    }

    void show() const {
        cout << numerator << "/" << denominator << endl;
    }

    friend Fraction operator+(const Fraction& f1, const Fraction& f2) {
        int num = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
        int denom = f1.denominator * f2.denominator;
        return Fraction(num, denom);
    }

    friend Fraction operator-(const Fraction& f1, const Fraction& f2) {
        int num = f1.numerator * f2.denominator - f2.numerator * f1.denominator;
        int denom = f1.denominator * f2.denominator;
        return Fraction(num, denom);
    }

    friend Fraction operator*(const Fraction& f1, const Fraction& f2) {
        int num = f1.numerator * f2.numerator;
        int denom = f1.denominator * f2.denominator;
        return Fraction(num, denom);
    }

    friend Fraction operator/(const Fraction& f1, const Fraction& f2) {
        if (f2.numerator == 0) {
            cout << "Division by zero." << endl;
            return 0;
        }
        int num = f1.numerator * f2.denominator;
        int denom = f1.denominator * f2.numerator;
        return Fraction(num, denom);
    }
};

int main() {
    Fraction f1(3, 4);
    Fraction f2(0, 1);

    cout << "f1: ";
    f1.show();
    cout << "f2: ";
    f2.show();

    Fraction sum = f1 + f2;
    cout << "f1 + f2: ";
    sum.show();

    Fraction difference = f1 - f2;
    cout << "f1 - f2: ";
    difference.show();

    Fraction multiplication = f1 * f2;
    cout << "f1 * f2: ";
    multiplication.show();

    Fraction division = f1 / f2;
    cout << "f1 / f2: ";
    division.show();

}
