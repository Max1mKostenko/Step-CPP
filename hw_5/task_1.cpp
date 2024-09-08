#include <iostream>
using namespace std;

int main()
{
    const int size = 10;

    int mas[size]{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int mas2[size]{};

    for (int i = 0; i < size; i++) {
        mas2[i] = mas[size - i - 1];

        cout << mas2[i] << " ";
    }
}