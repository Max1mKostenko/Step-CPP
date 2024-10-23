#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream createFile("input.txt");
    createFile << "Hello everyone, One Two Three." << endl;
    createFile.close();

    string word_to_find, word_to_replace;

    cout << "Enter the word to find: ";
    cin >> word_to_find;
    cout << "Enter the word to replace: ";
    cin >> word_to_replace;

    ifstream fin("input.txt");
    ofstream fout("output.txt");
    string line;

    while (getline(fin, line)) {
        int pos = line.find(word_to_find);

        while (pos >= 0 && pos < line.length()) {
            line.replace(pos, word_to_find.length(), word_to_replace);
            pos = line.find(word_to_find, pos + word_to_replace.length());
        }
        fout << line << endl;
    }

    fin.close();
    fout.close();

    cout << "Process complete. Check the output file" << endl;
}
