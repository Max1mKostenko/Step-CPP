#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int a;

	do
	{
		cout << "Please enter any number in range 0 to 499: ";
		cin >> a;
	} while (a > 500 || a < 0);

	while (a <= 500) {
		sum += a;
		a++;
	}

	cout << "Sum: " << sum;
}
