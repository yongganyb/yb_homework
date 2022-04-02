/*
 * FileName: T5_29.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 彼得·米纽伊特问题
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double amount;
    double principal=24.0;
    double rate=0.05;

    cout << "Year" << setw(21) << "Amount on deposit" << endl;

    cout << fixed << setprecision(2);

    for(rate=0.05; rate<=0.1; rate=rate+0.01)
    {
        cout << "rate = " << rate << endl;
        for(unsigned int year=1; year<=394; ++year)
        {
            amount=principal*pow(1.0+rate,year);

            cout << setw(4) << year << setw(21) << amount << endl;

        }
    }
    return 0;
}
