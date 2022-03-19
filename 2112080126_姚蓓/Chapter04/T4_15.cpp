/*
 * FileName: T4_15.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 销售佣金计算器
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double a,b;
    while(a!=-1)
    {
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> a;
        if(a==-1) break;
        b=200.00+a*0.09;
        cout << "Salary is: " << fixed << setprecision(2) << b << endl;
        cout << endl;
    }
    return 0;
}
