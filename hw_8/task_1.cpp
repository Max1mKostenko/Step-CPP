#include <iostream>
using namespace std;

void func(int num1, int num2) {
    int number = num1;
    for (int i = 1; i < num2;  i++) {
        num1 *= number;
    }

    cout << num1;
}

int main()
{
    func(10, 6);
}
