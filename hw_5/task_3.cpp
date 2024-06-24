#include <iostream>
using namespace std;

int main()
{
	float num1, num2;
	char operation;

	cout << "Please enter first number: ";
	cin >> num1;

	cout << "Please enter second number: ";
	cin >> num2;

	cout << "Please enter operation (-, +, *, /): ";
	cin >> operation;

	if (operation == '+')
		cout << num1 << " + " << num2 << " = " << num1 + num2;

	else if (operation == '-')
		cout << num1 << " - " << num2 << " = " << num1 - num2;

	else if (operation == '*')
		cout << num1 << " * " << num2 << " = " << num1 * num2;

	else if (operation == '/')
		if (num2 == 0)
			cout << "divide by zero isn't correct";
		else
			cout << num1 << " / " << num2 << " = " << num1 / num2;
	else
		cout << "Your operetor isn't (+, -, *, /)";
}
