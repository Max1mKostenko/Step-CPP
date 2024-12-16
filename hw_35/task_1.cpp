#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number;
    cout << "Enter a number from 1 to 10: ";
    cin >> number;

    if (number < 1 || number > 10) {
        cout << "Invalid input. Please enter a number in range from 1 to 10." << endl;
        return 1;
    }

    vector<long long> powers(10);
    powers[0] = number;
    for (int i = 1; i < 10; ++i) {
        powers[i] = powers[i - 1] * number;
    }

    cout << "Result: ";
    for (int i = 0; i < 10; ++i) {
        cout << powers[i] << " ";
    }
    cout << endl;
}
