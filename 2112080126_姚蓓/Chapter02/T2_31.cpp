/*
 * FileName: T2_31.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 每日开车费用
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,n;
    cout << "输入每天开的总英里数：" << endl;
    cin >> a;
    cout << "输入每加仑汽油的价格：" << endl;
    cin >> b;
    cout << "输入每加仑汽油可以开的平均英里数" << endl;
    cin >> c;
    cout << "输入每日的停车费：" << endl;
    cin >> d;
    cout << "输入每日的同行费：" << endl;
    cin >> e;
    n=(a/c)*b+d+e;
    cout << "每日开车的费用：" << n << endl;
    return 0;
}
