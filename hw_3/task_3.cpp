#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    float man1, man2, man3;
    float sal1, sal2, sal3;
    cout << "Input level of sales for first manager: ";
    cin >> man1;

    cout << "Input level of sales for second manager: ";
    cin >> man2;

    cout << "Input level of sales for third manager: ";
    cin >> man3;

    if (man1 >= 0 && man1 < 500) {
        sal1 = 200 * 1.03;
        cout << "Salary first manager: " << sal1 << "$" << endl;
    }
    else if (man1 >= 500 && man1 < 1000) {
        sal1 = 200 * 1.05;
        cout << "Salary first manager: " << sal1 << "$" << endl;
    }
    else if (man1 >= 1000) {
        sal1 = 200 * 1.08;
        cout << "Salary first manager: " << sal1 << "$" << endl;
    }

    if (man2 >= 0 && man2 < 500) {
        sal2 = 200 * 1.03;
        cout << "Salary second manager: " << sal2 << "$" << endl;
    }
    else if (man2 >= 500 && man2 < 1000) {
        sal2 = 200 * 1.05;
        cout << "Salary second manager: " << sal2 << "$" << endl;
    }
    else if (man2 >= 1000) {
        sal2 = 200 * 1.08;
        cout << "Salary second manager: " << sal2 << "$" << endl;
    }

    if (man3 >= 0 && man3 < 500) {
        sal3 = 200 * 1.03;
        cout << "Salary third manager: " << sal3 << "$" << endl;
    }
    else if (man3 >= 500 && man3 < 1000) {
        sal3 = 200 * 1.05;
        cout << "Salary third manager: " << sal3 << "$" << endl;
    }
    else if (man3 >= 1000) {
        sal3 = 200 * 1.08;
        cout << "Salary third manager: " << sal3 << "$" << endl;
    }

    float max_salary = max({ sal1, sal2, sal3 });
    string best_manager;

    if (max_salary == sal1) {
        best_manager = "manager 1";
    }
    else if (max_salary == sal2) {
        best_manager = "manager 2";
    }
    else {
        best_manager = "manager 3";
    }

    cout << "Salary of the best manager (" << best_manager << "): " << max_salary + 200 << "$" << endl;

}
