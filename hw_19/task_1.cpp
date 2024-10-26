#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("text.txt");
    fout << "Съешь же ещё этих мягких французских булок, да выпей чаю.";
    fout.close();

    int shift = 3;
    char line[200];

    ifstream fin("text.txt");

    while (fin.getline(line, 200)) {
        for (int i = 0; line[i] != '\0'; i++) {
            char c = line[i];
            if (c >= 'А' && c <= 'Я') {
                line[i] = 'А' + (c - 'А' + shift) % 32;
            }
            else if (c >= 'а' && c <= 'я') {
                line[i] = 'а' + (c - 'а' + shift) % 32;
            }
        }
        fout << line << endl;
    }

    fin.close();

}