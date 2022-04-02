/*
 * FileName: T5_16.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ¸´Àû¼ÆËã
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int a,m=100000,b,c;
    double rate;
    rate = 0.05;
    cout << "Year" << setw(21) << "Amount on deposit" << endl;
    for(unsigned int year = 1; year <= 10; ++year)
    {
        a = m*pow(1.0+rate,year);
        b = a/100;c = a%100;
        cout << setw(4) << year << setw(21) << b << "." << c << endl;
    }

    return 0;
}
