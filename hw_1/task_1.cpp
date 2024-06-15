#include <iostream>
using namespace std;

int main()
{
	int R1 = 2;
	int R2 = 4;
	int R3 = 8;

	cout << "R0 = " << (R1 * R2 * R3) / ((R1 * R2) + (R3 * R2) + (R1 * R3)) << endl;
}
