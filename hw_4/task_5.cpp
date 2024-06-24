#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int k;

    do {
        cout << "Please enter any number in range from 1 to 10: ";
        cin >> k;
    } while (k < 1 || k > 10);

    while (i <= 10) {
        cout << k << " * " << i << " = " << k * i << endl;
        i++;

    }

}