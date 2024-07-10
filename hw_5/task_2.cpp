#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    const int size = 12;
    int month;

    int minN = LONG_MAX;
    int maxN = LONG_MIN;
    int minIndex = 0;
    int maxIndex = 0;

    int mas[size]{};

    for (int i = 0; i < size; i++) {  // creating a massive
        cout << "Please enter salary for the " << i + 1 << " month: ";
        cin >> month;
        mas[i] = month;
    }


    for (int i = 0; i < size; i++) {
        if (mas[i] > maxN) {
            maxN = mas[i];
            maxIndex = i;
        }
        if (mas[i] < minN) {
            minN = mas[i];
            minIndex = i;
        }


    }

    cout << "Minimal salary in " << minIndex + 1 << " month." << endl;
    cout << "Maximum salary in " << maxIndex + 1 << " month.";

}
