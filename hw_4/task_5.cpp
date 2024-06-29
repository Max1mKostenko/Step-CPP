#include <iostream>
using namespace std;

int main()
{
    short sum_salary_all = 0;
    short sal_1_emp_kvartal = 0;
    short sal_1_emp_month = 0;
    short salary = 0;

    short workers = 10;
    short months = 3;

    for (int i = 1; i <= workers; i++) {
        for (int n = 1; n <= months; n++) {
            if (n == 1) {
                cout << "Please enter December salary for " << i << " manager: ";
                cin >> sal_1_emp_month;
                sal_1_emp_kvartal += sal_1_emp_month;
            }
            else if (n == 2) {
                cout << "Please enter January salary for " << i << " manager: ";
                cin >> sal_1_emp_month;
                sal_1_emp_kvartal += sal_1_emp_month;
            }
            else {
                cout << "Please enter Fabruary salary for " << i << " manager: ";
                cin >> sal_1_emp_month;
                sal_1_emp_kvartal += sal_1_emp_month;
            }
        }

        cout << "Salary " << i << " manager for kvartal: " << sal_1_emp_kvartal << endl;

        sum_salary_all += sal_1_emp_kvartal;

        sal_1_emp_kvartal = 0;

    }

    cout << "Sum 10 managers: " << sum_salary_all << endl;
}