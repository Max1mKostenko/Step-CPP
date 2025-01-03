#include <iostream>
#include <string>

using namespace std;

int calculate(const string& expression) {
    int result = 0;
    int currentNumber = 0;
    bool firstNumber = true;

    for (int i = 0; i < expression.length(); ++i) {
        char ch = expression[i];

        if (isdigit(ch)) {
            currentNumber = currentNumber * 10 + (ch - '0');
        }
        else if (ch == '*') {
            if (firstNumber) {
                result = currentNumber;
                firstNumber = false;
            }
            else {
                result *= currentNumber;
            }
            currentNumber = 0;
        }
        else {
            throw "Invalid input";
        }
    }

    if (firstNumber) {
        result = currentNumber;
    }
    else {
        result *= currentNumber;
    }

    return result;
}

int main() {
    string expression;

    cout << "Enter a mathematical expression (e.g., 3*2*1*4): ";
    cin >> expression;

    try {
        int result = calculate(expression);
        cout << "Result: " << result << endl;
    }
    catch (const char* error) {
        cout << "Error: " << error << endl;
    }
    catch (...) {
        cout << "An Unknown Error!" << endl;
    }
}
