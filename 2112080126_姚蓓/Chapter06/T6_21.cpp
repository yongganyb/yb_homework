/*
 * FileName: T6_21.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 偶数
 */

#include <iostream>

using namespace std;

int iseven(int a)
{
    if(0==a%2)
        return true;
    else
        return false;
}
int main()
{
    int a;
    cout << "如果要停止输入整数，请输入-1" << "\n请输入整数：" ;
    cin >> a;
    cout << iseven(a) << endl;
    while(a!=-1)
    {
        cin >> a;
        cout << iseven(a) << endl;
    }

    return 0;
}
