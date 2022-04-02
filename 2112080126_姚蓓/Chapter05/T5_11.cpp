/*
 * FileName: T5_11.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ¸´Àû
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a,m=1000.00,rate;
    for(rate=0.05;rate<=0.10;rate=rate+0.01)
    {
        cout << "rate = " << rate << endl;
        cout << "Year" << setw(21) << "Amount on deposit" << endl;
        cout << fixed << setprecision(2);
        for(unsigned int year = 1; year <= 10; ++year)
        {
            a = m*pow(1.0+rate,year);
            cout << setw(4) << year << setw(21) << a << endl;
        }
    }

    return 0;
}
