#include <iostream>
using namespace std;

class String
{
    int size;
    char* mas;

public:
    String(int _size) : size{ _size }, mas{ new char[size] {} } {}
    String() : String(80) {}
    String(const char* str) : String(strlen(str) + 1)
    {
        strcpy_s(mas, size, str);
    }
    ~String() { delete[] mas; }

    void show() { puts(mas); }
    void input() { cin.getline(mas, size); }
};

int main()
{
    String str1(40);
    String str2;
    String str3("Hello");

    str1.input();
    str2.input();

    str1.show();
    str2.show();
    str3.show();
}
