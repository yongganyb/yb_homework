/*
 * FileName: T6_37.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 쳲��������еĵ����汾
 */
#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if(n<=0)
        return 0;
    if(n==1||n==2)
        return 1;
    int a=1,b=1,c=0;
    for(int i=3;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
