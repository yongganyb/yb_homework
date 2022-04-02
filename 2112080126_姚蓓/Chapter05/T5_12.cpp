/*
 * FileName: T5_12.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 使用嵌套的for循环绘制图案
 */
#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for(int i=1;i<=10;i++)
    {
        for(int j=10;j>=i;j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for(int i=1;i<=10;i++)
    {
        for(int k=1; k<i; k++)
        {
            cout << " ";
        }
        for(int j=10; j>=i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    for(int i=1;i<=10;i++)
    {
        for(int k=10; k>i; k--)
        {
            cout << " ";
        }
        for(int j=1; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
