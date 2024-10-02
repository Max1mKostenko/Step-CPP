#include <iostream>
using namespace std;

void random_nums(int mas[], int size) {
    for (int i = 0; i < size; i++) mas[i] = rand() % 100;
}

void show_mas(int mas[], int size) {
    for (int i = 0; i < size; i++) cout << mas[i] << " ";
    cout << endl;
}

bool exist(int mas[], int size, int elem) {
    for (int i = 0; i < size; i++) {
        if (mas[i] == elem) return true;
    }
    return false;
}

int main() {
    int M, N;

    cout << "Please enter M: ";
    cin >> M;
    cout << "Please enter N: ";
    cin >> N;

    int* A = new int[M];
    int* B = new int[N];

    random_nums(A, M);
    random_nums(B, N);
    show_mas(A, M);
    show_mas(B, N);


    int* temp = new int[min(M, N)];
    int temp_size = 0;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (A[i] == B[j] && !exist(temp, temp_size, A[i])) {
                temp[temp_size] = A[i];
                temp_size++;
                break;
            }
        }
    }

    cout << "Common elements without duplicates: ";
    if (temp_size > 0) {
        show_mas(temp, temp_size);
    }
    else {
        cout << "No common elements found" << endl;
    }

    delete[] A;
    delete[] B;
    delete[] temp;
}
