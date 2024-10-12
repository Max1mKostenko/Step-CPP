#include <iostream>
using namespace std;

void random_numbers(int* mas, int size) {
    for (int i = 0; i < size; i++)
        mas[i] = rand() % 100;
}

void show_mas(int* mas, int size) {
    for (int i = 0; i < size; i++)
        cout << mas[i] << " ";
    cout << endl;
}

int get_block_size(int max_size) {
    int block_size;
    while (true) {
        cout << "Enter the size of the element block (1 to " << max_size << "): ";
        cin >> block_size;
        cout << endl;

        if (block_size >= 1 && block_size <= max_size) {
            return block_size;
        }
        else {
            cout << "Error: Please enter a valid size between 1 and " << max_size << "" << endl;
        }
    }
}

int get_starting_index(int max_size) {
    int start_index;
    while (true) {
        cout << "Enter the starting index (0 to " << max_size - 1 << "): ";
        cin >> start_index;
        cout << endl;

        if (start_index >= 0 && start_index < max_size) {
            return start_index;
        }
        else {
            cout << "Error: Please enter a valid index between 0 and " << max_size - 1 << "." << endl;
        }
    }
}

void insert_block_into_mas(int* mas, int size, int* block, int block_size, int start_index) {
    if (start_index + block_size > size) {
        cout << "Error: Block size exceeds the array limits!" << endl;
        return;
    }

    for (int i = 0; i < block_size; i++) {
        mas[start_index + i] = block[i];
    }
}

int main() {
    srand(time(0));

    const int size = 10;
    int* mas = new int[size];
    random_numbers(mas, size);
    show_mas(mas, size);

    int start_index = get_starting_index(size);
    int block_size = get_block_size(size);

    int* block = new int[block_size];
    random_numbers(block, block_size);

    insert_block_into_mas(mas, size, block, block_size, start_index);
    show_mas(mas, size);

    delete[] block;
    delete[] mas;
}
