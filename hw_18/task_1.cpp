#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char text[200] = "Hello one, Neo is everyone";
    char newText[200] = {};

    char word[100] = "one";
    char replace[100] = "two?";

    int index = strstr(text, word) - text;

    while (index >= 0)
    {
        strncpy_s(newText, text, index);
        strcat_s(newText, replace);
        strcat_s(newText, text + index + strlen(word));

        strcpy_s(text, newText);
        index = strstr(text, word) - text;
    }

    puts(text);
}
