/*
 * FileName: T5_18.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 进制表
 */
#include <iostream>

using namespace std;

int main()
{
    int a[10],i,j,n;
    for(i=1;i<=256;i++)
    {
        //求二进制
        n=i;
        for(j=0;n>0;j++)
        {
            a[j]=n%2;
            n=n/2;
        }
        for(j=j-1;j>=0;j--)
        {
            cout << a[j];
        }
        cout << "\t";
        cout << dec << i << "\t" << oct << i << "\t" << hex << i << endl;//通过流操作符输出十进制，八进制，十六进制
    }

    return 0;
}
