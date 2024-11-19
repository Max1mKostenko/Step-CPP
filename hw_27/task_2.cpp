#include <iostream>
#include <string>
using namespace std;

bool is_valid(string& expression) {
    for (int i = 0; i < expression.size(); i++) {
        char str = expression[i];
        if (str >= '0' && str <= '9') continue;
        if (str == '+' || str == '-') continue;
        if (str == ' ') continue;
        return false;
    }
    return true;
}

int calculate_expression(string& expression) {
    int result = 0, number = 0;
    char operation = '+';
    for (int i = 0; i <= expression.size(); i++) {
        if (i < expression.size() && expression[i] >= '0' && expression[i] <= '9') {
            number = number * 10 + (expression[i] - '0');
        }
        else if (i == expression.size() || expression[i] == '+' || expression[i] == '-') {
            if (operation == '+') result += number;
            else if (operation == '-') result -= number;
            if (i < expression.size()) {
                operation = expression[i];
            }
            number = 0;
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter an expression: ";
    getline(cin, input);

    if (!is_valid(input)) {
        cout << "Error: Invalid expression!" << endl;
        return 1;
    }

    cout << "Result: " << calculate_expression(input) << endl;
}
