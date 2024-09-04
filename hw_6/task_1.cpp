#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    const int rows = 4;
    const int cols = 7;

    int matrix[rows][cols];
    int sum = 0;
    int maxSumRow = 0;
    int maxsum = 0;


    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = rand() % 90 + 10;
            sum += matrix[i][j];
            cout << matrix[i][j] << " ";

        }
        cout << " " << sum << endl;

        if (sum > maxsum)
        {
            maxsum = sum;
            maxSumRow = i;
        }
    }

    cout << "Max row: " << maxSumRow + 1 << " (sum: " << maxsum << ")" << endl;
}
