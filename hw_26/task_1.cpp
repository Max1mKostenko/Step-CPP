#include <iostream>
#include <string>
using namespace std;

void func(const string& path) {
    unsigned int last_backslash = path.rfind('\\');
    string a = (last_backslash != -1) ? path.substr(0, last_backslash) : "";

    string b = "";
    if (!a.empty()) {
        unsigned int second_last_backslash = a.rfind('\\');
        b = (second_last_backslash != -1) ? a.substr(second_last_backslash + 1) : a;
    }

    string c = (last_backslash != -1) ? path.substr(last_backslash + 1) : path;

    unsigned int dot_pos = c.rfind('.');
    string d = (dot_pos != -1) ? c.substr(dot_pos) : "";

    string e = (dot_pos != -1) ? c.substr(0, dot_pos) : c;

    cout << "a) " << a << endl;
    cout << "b) " << b << endl;
    cout << "c) " << c << endl;
    cout << "d) " << d << endl;
    cout << "e) " << e << endl;
}

int main() {
    string file_path;
    cout << "Enter the file path: ";
    getline(cin, file_path);

    func(file_path);
}
