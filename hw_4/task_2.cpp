#include <iostream>
using namespace std;

int main()
{
    int a, b;

    do {
        cout << "Please enter the first border of the range: ";
        cin >> a;

        cout << "Please enter the second border of the range: ";
        cin >> b;
    } while (a >= b);

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < 20; i++) {
       int random =  rand() % (b - a + 1) + a;
       cout << random << endl;

       if (random % 2 == 0) {
           even_count++;
       }
       else {
           odd_count++;
       }

    }

    cout << "Even numbers: " << even_count << endl;
    cout << "Odd numbers: " << odd_count << endl;

    if (even_count > odd_count) {
        cout << "More even numbers" << endl;
    }
    else if (odd_count > even_count) {
        cout << "More odd numbers" << endl;
    }
    else {
        cout << "Count of even and odd numbers are equal" << endl;
    }
}
