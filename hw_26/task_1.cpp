#include <iostream>
#include <string>
using namespace std;

void func(string& file_path) {
    unsigned int last_slash = file_path.find_last_of("\\/"); // ищем \ либо /
    unsigned int last_dot = file_path.find_last_of('.');

    string path_without_file = "";
    if (last_slash >= 0)
        path_without_file = file_path.substr(0, last_slash);

    string last_folder = "";
    if (last_slash >= 0) {
        unsigned int prev_slash = file_path.find_last_of("\\/", last_slash - 1);
        if (prev_slash >= 0)
            last_folder = file_path.substr(prev_slash + 1, last_slash - prev_slash - 1);
    }

    string file_name_with_ext = (last_slash >= 0) ? file_path.substr(last_slash + 1) : file_path;

    string file_extension = "";
    if (last_dot >= 0 && last_dot > last_slash)
        file_extension = file_path.substr(last_dot);

    string file_name_without_ext = "";
    if (last_slash >= 0) {
        unsigned int start = last_slash + 1;
        unsigned int length = (last_dot >= 0 && last_dot > last_slash) ? last_dot - start : file_path.length() - start;
        file_name_without_ext = file_path.substr(start, length);
    }
    else {
        file_name_without_ext = (last_dot >= 0) ? file_path.substr(0, last_dot) : file_path;
    }

    cout << "a) Path without the file name: " << path_without_file << endl;
    cout << "b) Name of the last folder: " << last_folder << endl;
    cout << "c) File name with extension: " << file_name_with_ext << endl;
    cout << "d) File extension: " << file_extension << endl;
    cout << "e) File name without path and extension: " << file_name_without_ext << endl;
}

int main() {
    string file_path;
    cout << "Enter the file path: ";
    getline(cin, file_path);

    func(file_path);
}
