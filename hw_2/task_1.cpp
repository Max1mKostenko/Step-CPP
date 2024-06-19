#include <iostream>
using namespace std;

int main()
{
	float a, b, c, d, e;
	cout << "Please enter 5 marks: ";
	cin >> a >> b >> c >> d >> e;
	if ((a + b + c + d + e) / 5 >= 4)
		cout << "Student approved" << endl;
	else
		cout << "Student isn't approved" << endl;
}
