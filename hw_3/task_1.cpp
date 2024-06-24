#include <iostream>
using namespace std;

int main()
{
    char symbol;
    cout << "Please enter any char: ";
    cin >> symbol;

    if (isalpha(symbol))
        cout << "Symbol is a letter: " << "'" << symbol << "'" << endl;
    else if (isdigit(symbol))
        cout << "Symbol is a number: " << "'" << symbol << "'" << endl;
    else
        cout << "Symbol is a special symbol: " << "'" << symbol << "'" << endl;
}
