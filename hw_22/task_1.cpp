#include <iostream>
using namespace std;

class Fraction {
private:
    int numerator;   // чисельник
    int denominator;  // знаменник

public:
    void input() {
        cout << "Enter the numerator: ";
        cin >> numerator;
        cout << "Enter the denominator: ";
        cin >> denominator;
        if (denominator == 0) {
            cout << "Error: denominator cannot be zero." << endl;
            return;
        }
    }

    void output() {
        cout << "Fraction: " << numerator << "/" << denominator << endl;
    }

    void add(int number) {
        numerator += number * denominator;    //  a/b + (number*b) / b
    }

    void subtract(int number) {
        numerator -= number * denominator;    //  a/b - (number*b) / b
    }

    void multiply(int number) {
        numerator *= number;     //  a/b * number
    }

    void divide(int number) {
        if (number == 0) {
            cout << "Error: division by zero." << endl;
            return;
        }
        denominator *= number;     //  a/b * 1/number
    }
};

int main() {
    Fraction fraction;
    int number;

    fraction.input();
    fraction.output();

    cout << "Enter an integer to add: ";
    cin >> number;
    fraction.add(number);
    fraction.output();

    cout << "Enter an integer to subtract: ";
    cin >> number;
    fraction.subtract(number);
    fraction.output();

    cout << "Enter an integer to multiply: ";
    cin >> number;
    fraction.multiply(number);
    fraction.output();

    cout << "Enter an integer to divide: ";
    cin >> number;
    fraction.divide(number);
    fraction.output();

}
