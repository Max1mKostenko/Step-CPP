#include <iostream>
#include <vector>        // вектор - чтобы создать динамический 2д масив. без него у меня ошибки вылазили
using namespace std;

void fill_matrix_snake(vector<vector<int>>& arr) {
    int n = arr.size();
    int value = 1;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // заполняем четными
            for (int j = 0; j < n; j++) {
                arr[i][j] = value++;
            }
        } else {
            // заполняем не четными
            for (int j = n - 1; j >= 0; j--) {
                arr[i][j] = value++;
            }
        }
    }

    // выводим матрицу
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter the size of the matrix: ";
    cin >> size;

    vector<vector<int>> arr(size, vector<int>(size));

    fill_matrix_snake(arr);
}
