#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    const int rows = 4, cols = 4;
    int matrix[rows][cols];
    int row_sum = 0;
    int col_sum[cols] = {0};
    int total_sum = 0;

    for (int i = 0; i < rows; i++)
    {
        row_sum = 0;
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 10;
            row_sum += matrix[i][j];
            col_sum[j] += matrix[i][j];
            cout << matrix[i][j] << "  ";
        }
        total_sum += row_sum;
        cout << "| " << row_sum << endl;
    }

    cout << "----------------" << endl;

    // сума каждого столбца
    for (int j = 0; j < cols; j++)
    {
        cout << col_sum[j] << " ";
        total_sum += col_sum[j];
    }
    cout << "| " << total_sum / 2 << endl;
}
