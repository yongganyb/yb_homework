/*
 * FileName: T4_27.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 打印二进制数的十进制数
 */
#include <iostream>

using namespace std;

int main()
{
    char a;
    int b=0;
    cout << "输入一个二进制数,如果要结束，请按非0非1" << endl;
    while(1)
    {
        cin >> a;
        if (a=='1')  {b=2*b+1;}
        else if(a=='0') {b=2*b;}
        else break;
    }
    cout << b << endl;
    return 0;
}
