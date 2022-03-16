/*
 * FileName: T2_24.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 读入一个整数，输出它是奇数还是偶数
 */
#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "输入一个整数：" << endl;
    cin >> a;
    if(0==a%2) {cout << "这是一个偶数" << endl;}
    else {cout << "这是一个奇数" << endl;}

    return 0;
}
