/*
 * FileName: T2_28.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 输入一个5位整数，将这些数字按间隔3个空格输出
 */
#include <iostream>

using namespace std;

int main()
{
    int n,a,b,c,d,e;
    cout << "输入一个5位整数；" << endl;
    cin >> n;
    a=n%10;
    b=(n/10)%10;
    c=(n/100)%10;
    d=(n/1000)%10;
    e=(n/10000)%10;
    cout << e << "   " << d << "   " << c << "   " << b << "   " << a;

    return 0;
}
