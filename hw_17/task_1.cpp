#include <iostream>
using namespace std;

int mystrcmp(const char* str1, const char* str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    if (*str1 == *str2) {
        return 0;
    }

    if (*str1 > *str2) {
        return 1;
    }
    else {
        return -1;
    }
}

int stringToNumber(char* str) {
    int res = 0;
    bool is_negative = false;

    if (*str == '-') {
        is_negative = true;
        str++;
    }

    while (*str) {
        if (isdigit(*str)) {
            res = res * 10 + (*str - '0');
        }
        else {
            break;
        }
        str++;
    }

    if (is_negative) {
        return -res;
    }
    else {
        return res;
    }

}

char* mystrrev(char* str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        swap(str[i], str[len - i - 1]);
    }
    return str;
}

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";
    cout << "Result of mystrcmp: " << mystrcmp(str1, str2) << endl;

    char numberStr[] = "-123456";
    cout << "Result of stringToNumber: " << stringToNumber(numberStr) << endl;

    char str_to_reverse[] = "Hello, world!";
    cout << "Original string: " << str_to_reverse << endl;
    cout << "Reversed string: " << mystrrev(str_to_reverse) << endl;
}
