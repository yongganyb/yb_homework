/*
 * FileName: T2_25.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 读入两个整数，输出第一个数是否是第二个数的倍数
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "输入两个整数：" << endl;
    cin >> a >> b;
    if(0==a||0==b) {cout << "第一个数不是第二个数的倍数" << endl;}
    else
    {
        if(0==a%b) {cout << "第一个数是第二个数的倍数" << endl;}
        else {cout << "第一个数不是第二个数的倍数" << endl;}
    }


    return 0;
}
