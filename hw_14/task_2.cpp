#include <iostream>
using namespace std;

void random_nums(int mas[], int size) {
    for (int i = 0; i < size; i++) mas[i] = rand() % 7 - 3;
}

void show_mas(int mas[], int size) {
    for (int i = 0; i < size; i++) cout << mas[i] << " ";
    cout << endl;
}

int remove_zeros(int mas[], int size) {
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        if (mas[i] != 0) {
            mas[newSize++] = mas[i];
        }
    }
    return newSize;
}

int main() {
    int M;

    cout << "Please enter M: ";
    cin >> M;

    int* A = new int[M];

    random_nums(A, M);
    cout << "Original array: ";
    show_mas(A, M);

    int newSize = remove_zeros(A, M);
    cout << "Array after removing zeros: ";
    show_mas(A, newSize);

    delete[] A;
}
