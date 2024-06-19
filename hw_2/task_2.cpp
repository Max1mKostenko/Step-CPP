#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Please enter any number: ";
	cin >> a;

	if ((a % 2) == 0)
		cout << a * 3;
	else
		cout << (float)a / 2;
}
