#include <iostream>


using namespace std;

int main() {
    int i = 0;
    int sum = 0;
    while (i <= 1000) {
        sum += i;
        i++;
    }
    cout << sum << endl;
    cout << sum / 1000 << endl;

}