#include <iostream>
using namespace std;

bool find_special_char(char symbol) {
    string specialChars = "!?.";

    for (int i = 0; i < specialChars.length(); i++) {
        char special = specialChars[i];

        if (symbol == special) {
            return true;
        }
    }
    return false;
}

bool func(string password) {
    if (password.length() < 8 || password.length() > 20) {
        return false;
    }

    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;

    for (int i = 0; i < password.length(); i++) {
        char symbol = password[i];

        if (islower(symbol)) {
            hasLower = true;
        }
        else if (isupper(symbol)) {
            hasUpper = true;
        }
        else if (isdigit(symbol)) {
            hasDigit = true;
        }
        else if (find_special_char(symbol)) {
            hasSpecial = true;
        }
        else if (isspace(symbol)) {
            return false;
        }
    }

    return hasLower && hasUpper && hasDigit && hasSpecial;
}

int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;

    if (func(password)) {
        cout << "Password is valid!\n";
    }
    else {
        cout << "Password doesn't match requirements.\n";
    }
}
