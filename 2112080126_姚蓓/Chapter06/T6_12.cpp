/*
 * FileName: T6_12.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 停车费
 */
#include <iostream>
#include <iomanip>

using namespace std;

double caculateCharges(double a)
{
    double b;
    if(a <= 3.0)
        b = 2.00;
    else
    {
        b = 2.0 + (a-3) * 0.50;
        if(b<=10.00)
            b=b;
        else
            b=10.00;
    }
    return b;
}
int main()
{
    double a[3],b[3],n1=0,n2=0;
    cout << "请依次输入三个客户停车小时数：";
    for(int i=0;i<3;i++)
    {
        cin >> a[i] ;
        b[i] = caculateCharges(a[i]);
    }
    cout << "Car\tHours\tCharge" << endl;
    for(int j=0;j<3;j++)
    {
        cout << j+1 << "\t" << fixed << setprecision(1) << a[j] << "\t" << fixed << setprecision(2) << b[j] << endl;
        n1=n1+a[j];
        n2=n2+b[j];
    }
    cout << "TOTAL\t" << fixed << setprecision(1) << n1 << "\t" << fixed << setprecision(2) << n2 << endl;

    return 0;
}
