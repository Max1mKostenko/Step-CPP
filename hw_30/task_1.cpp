#include <iostream>
using namespace std;

class String {
    int size;
    char* mas;

public:
    String(int _size) : size{ _size }, mas{ new char[size] {} } {}

    String() : String(80) {}

    String(const char* str) : String(strlen(str) + 1) {
        strcpy_s(mas, size, str);
    }

    String(const String& other) : String(other.size) {
        strcpy_s(mas, size, other.mas);
    }

    String& operator=(const String& other) {
        if (this != &other) {
            delete[] mas;
            size = other.size;
            mas = new char[size];
            strcpy_s(mas, size, other.mas);
        }
        return *this;
    }

    ~String() { delete[] mas; }

    void show() { puts(mas); }

    void input() { cin.getline(mas, size); }

    friend bool operator==(const String& first, const String& other) {
        return strcmp(first.mas, other.mas) == 0;
    }

    friend bool operator!=(const String& first, const String& other) {
        return !(first == other);
    }

    friend bool operator<(const String& first, const String& other) {
        return strcmp(first.mas, other.mas) < 0;
    }

    friend bool operator>(const String& first, const String& other) {
        return strcmp(first.mas, other.mas) > 0;
    }

    friend String operator+(const String& first, const String& other) {
        String result(first.size + other.size - 1);
        strcpy_s(result.mas, result.size, first.mas);
        strcat_s(result.mas, result.size, other.mas);
        return result;
    }

    String& operator+=(const String& other) {
        *this = *this + other;
        return *this;
    }
};

int main() {
    String str1(40);
    String str2;
    String str3("Hello");

    cout << "Input first string: ";
    str1.input();
    cout << "Input second string: ";
    str2.input();

    str1.show();
    str2.show();
    str3.show();

    if (str1 == str2)
        cout << "Strings are equal\n";
    else
        cout << "Strings are not equal\n";

    String str4 = str1 + str3;
    str4.show();

    str1 += str3;
    str1.show();
}
