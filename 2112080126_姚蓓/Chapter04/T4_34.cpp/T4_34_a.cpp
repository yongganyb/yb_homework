/*
 * FileName: T4_34_a.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 阶乘
 */
#include <iostream>

using namespace std;

int main()
{
    int n,x=1;
    cout << "输入一个非负整数：";
    cin >>n;
    while(n>=1)
    {
        x=x*n;
        n--;
    }
    cout << "n阶乘为：" << x << endl;
    return 0;
}
