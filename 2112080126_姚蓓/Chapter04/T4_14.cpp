/*
 * FileName: T4_14.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 信用额度问题
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    double b,c,d,e,n;
    while(a!=-1)
    {
        cout << "Enter account number (or -1 to quit): ";
        cin >> a;
        if(a==-1) break;
        cout << "Enter beginning balance: ";
        cin >> b;
        cout << "Enter total charges: ";
        cin >> c;
        cout << "Enter total credits: ";
        cin >> d;
        cout << "Enter credit limits: ";
        cin >> e;
        n=b+c-d;
        cout << "New balance is " << n << endl;
        if(n>e)
        {
            cout << "Account:\t" << a << "\nCredit limit:\t" << fixed << setprecision(2) << e << "\nBalance:\t" << n << "\nCredit Limit Exceeded." << endl;
        }
        cout << endl;
    }
    return 0;
}
