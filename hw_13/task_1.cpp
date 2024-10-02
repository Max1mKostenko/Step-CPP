#include <iostream>
using namespace std;

void func(int mas[], int empty_mas[], int size) {
	for (int i = 0; i < size; i++) {
		*(empty_mas + i) = *(mas + i);
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
	int empty_mas[size];

	func(mas, empty_mas, size);
	show_mas(mas, size);
	show_mas(empty_mas, size);
}