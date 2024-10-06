#include <iostream>
using namespace std;

void insertBlock(int* mas, int& size, int* block, int blockSize, int index) {

    if (index < 0 || index > size) { // проверка на коректность индекса
        cout << "Error: Insert index out of range." << endl;
        return;
    }

    if (size + blockSize > 10) {  // проверка что масив не выйдет за пределы
        cout << "Error: Not enough space in the array for insertion." << endl;
        return;
    }

    int* temp = new int[size + blockSize];

    for (int i = 0; i < index; ++i) {
        temp[i] = mas[i];
    }

    for (int i = 0; i < blockSize; ++i) {
        temp[index + i] = block[i];
    }

    for (int i = index; i < size; ++i) {
        temp[blockSize + i] = mas[i];
    }

    size += blockSize;

    for (int i = 0; i < size; ++i) {
        mas[i] = temp[i];
    }

    delete[] temp;
}

void showMas(int mas[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << mas[i] << " ";
    }
}


int main()
{
    int mas[10] = { 1, 2, 3, 4, 5 };
    int size = 5;

    int block[] = { 9, 8, 7 };
    int blockSize = 3;
    int index = 2;

    insertBlock(mas, size, block, blockSize, index);
    showMas(mas, size);
}