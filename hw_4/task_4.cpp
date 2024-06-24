#include <iostream>

using namespace std;

int main()
{
	int multiply = 1;
	int a;

	do
	{
		cout << "Please enter any number in range 1 to 20: ";
		cin >> a;
	} while (a > 20 || a < 1);

	while (a <= 20) {
		multiply *= a;
		a++;
	}

	cout << "Multiply: " << multiply;
}
