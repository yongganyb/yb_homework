/*
 * FileName: T6_29.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ËØÊý
 */
#include <iostream>

using namespace std;
//a
int test(int n)
{
    int a=0;
    for(int i=2;i<n;i++)
    {
        if(0==n%i)
            a=1;//ËØÊý
    }
    return a;
}
int main()
{
    //b
    int a;
    for(int i=2;i<=10000;i++)
    {
        a=test(i);
        if(1==a)
            cout << i << " ";
    }
    return 0;
}
