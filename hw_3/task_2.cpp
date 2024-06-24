#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    float num1, num2, num3;
    cout << "Please enter number 1: ";
    cin >> num1;

    cout << "Please enter number 2: ";
    cin >> num2;

    cout << "Please enter number 3: ";
    cin >> num3;

    cout << "1. Sum(+)\n2. Multiply(*)\n3. Min\n4. Max\n5. Avg Arethmetic" << endl;
    cout << "Input number of operation: ";
    int choice;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << num1 + num2 + num3;
        break;

    case 2:
        cout << num1 * num2 * num3;
        break;

    case 3:
        cout << min({num1, num2, num3});
        break;

    case 4:
        cout << max({num1, num2, num3});
        break;

    case 5:
        cout << (num1 + num2 + num3) / 3;
        break;

    default:
        cout << "Input isn't correct. Please choose option from 1 to 5";
    }
}
