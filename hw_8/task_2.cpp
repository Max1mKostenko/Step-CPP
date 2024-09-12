#include <iostream>
using namespace std;

int func(int num1, int num2) {
    int sum = 0;
    for (int i = num1 + 1; i < num2; i++) {
        sum += i;
    }

    return sum;
}

int main()
{

    int res = func(1, 7);   // ( 2 + 3 + 4 + 5 + 6)
    cout << res << endl;
}