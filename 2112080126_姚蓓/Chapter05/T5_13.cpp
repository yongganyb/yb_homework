/*
 * FileName: T5_13.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 条形图
 */
#include <iostream>

using namespace std;

int main()
{
    int a;//a是用户要输入的数
    cout << "请输入一个1-30之间的1数：";
    cin >> a;
    for(int i=1;i<=a;i++)
    {
        cout << "*";
    }

    return 0;
}
