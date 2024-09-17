#include <iostream>
using namespace std;

void snake_matrix(int matrix[][3], int n) {
    int value = 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = value++;
            }
        }
        else {
            for (int j = n - 1; j >= 0; j--) {
                matrix[i][j] = value++;
            }
        }
    }
}

void print_matrix(int matrix[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[3][3];

    snake_matrix(arr, 3);

    print_matrix(arr, 3);

}
