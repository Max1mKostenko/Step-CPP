#include <iostream>
using namespace std;

bool func(int number) {
    if (number < 100000 || number > 999999) {
        return false;
    }

    int firstPart = number / 1000;
    int secondPart = number % 1000;

    int sumFirst = 0, sumSecond = 0;

    while (firstPart > 0) {
        sumFirst += firstPart % 10;
        firstPart /= 10;
    }

    while (secondPart > 0) {
        sumSecond += secondPart % 10;
        secondPart /= 10;
    }

    return sumFirst == sumSecond;
}

int main() {
    int number;
    cout << "Please enter six-digit number: ";
    cin >> number;

    if (func(number)) {
        cout << "Number is lucky!";
    }
    else {
        cout << "Number isn't lucky.";
    }
}
