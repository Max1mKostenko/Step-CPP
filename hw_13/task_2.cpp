#include <iostream>
using namespace std;

void func(int mas[], int size) {
	int* start = mas;
	int* end = mas + size - 1;

	for (int i = 0; i < size / 2; i++, start++, end--) {
		swap(*start, *end);
	}
}

void show_mas(int mas[], int size) {
	for (int i = 0; i < size; i++) {
		cout << *(mas + i) << " ";
	}
	cout << endl;
}


int main() {
	const int size = 6;
	int mas[size]{ 1, 2, 3, 4, 5, 6 };

	show_mas(mas, size);
	func(mas, size);
	show_mas(mas, size);
}