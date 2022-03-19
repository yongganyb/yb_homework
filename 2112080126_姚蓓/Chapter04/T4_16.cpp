/*
 * FileName: T4_16.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: Ð½½ð¼ÆËãÆ÷
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a,b,c;
    while(a!=-1)
    {
        cout << "Enter hours worked (-1 to end): ";
        cin >> a;
        if(a==-1) break;
        cout << "Enter hourly rate of the employee ($00.00): ";
        cin >> b;
        if(a<=40) {c=a*b;}
        else {c=40*b+(a-40)*b*1.5;}
        cout << "Salary is $" << fixed << setprecision(2) << c << endl;
        cout << endl;
    }
    return 0;
}
