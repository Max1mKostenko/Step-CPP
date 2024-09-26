#include <iostream>
using namespace std;
const int columns = 5;

void fill_matrix(int matrix[][columns], int rows) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			matrix[i][j] = rand() % 2;
		}
	}
}

void find_seats(int matrix[][columns], int rows, int num_of_seats) {
	int neighboring_seats = 0;
	bool found = 0;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (matrix[i][j] == 0) {
				neighboring_seats += 1;
			}
			else {
				neighboring_seats = 0;
			}

			if (neighboring_seats >= num_of_seats) {
				cout << "There're free seats in the row (" << i + 1 << ") - ";

				for (int i = 1; i < num_of_seats + 1; i++) {
					cout << (j + 1 - num_of_seats) + i << " ";
				}
				cout << endl;
				found = 1;
			}
		}
		neighboring_seats = 0;
	}

	if (found == 0) {
		cout << "No free neighboring seats were available" << endl;
	}
}

int main()
{
	srand(time(0));

	const int rows = 5;
	int matrix[rows][columns];
	int num_of_seats = 1;

	fill_matrix(matrix, rows);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl << "Enter the number of neighboring seats you need: ";
	cin >> num_of_seats;

	find_seats(matrix, rows, num_of_seats);
}