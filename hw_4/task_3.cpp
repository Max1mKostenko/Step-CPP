#include <iostream>
using namespace std;

int main()
{
	int a;
	char star = '*';
	char under_score = '_';

	do {
		cout << "Please enter any positive number: ";
		cin >> a;
	} while (a < 0);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int k = 0; k < a; k++) {
				cout << star;
			}
			for (int n = 0; n < a; n++) {
				cout << under_score;
			}
		}
		cout << endl;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			for (int n = 0; n < a; n++) {
				cout << under_score;
			}
			for (int k = 0; k < a; k++) {
				cout << star;
			}

		}
		cout << endl;
	}
}
