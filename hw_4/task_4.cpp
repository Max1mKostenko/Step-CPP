#include <iostream>
using namespace std;

int main()
{
    int length_width;
    char star = '*';
    char space = ' ';
    do {
        cout << "Please enter length and width for picture: ";
        cin >> length_width;
    } while (length_width <= 1 || length_width % 2 == 0);


    for (int i = 0; i < length_width; i++) {
        for (int n = 0; n < length_width; n++) {
            if (i == length_width / 2) //вертикально
            {
                cout << star;
            }

            else if (i == n) // диагональ слева сверху и справа снизу
            {
                cout << star;
            }

            else if (i + n == length_width - 1) // диагональ слева снизу и справа сверху
            {
                cout << star;
            }


            else if (n == length_width / 2)  //горизонтально
            {
                cout << star;
            }

            else {
                cout << space;
            }
        }
        cout << endl;
    }
}
