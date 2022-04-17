/*
 * FileName: T6_28.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ÍêÊý
 */
#include <iostream>

using namespace std;

int isperfect(int number)
{
    int a[100],j=0,n=0;
    for(int i=1;i<number;i++)
    {
        if(0==number%i)
        {
            a[j]=i;
            j++;
        }
    }
    for(int k=0;k<j;k++)
    {
        n=n+a[k];
    }
    int m=0;
    if(number==n) m=1;
    return m;
}
int main()
{
    int n,m;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        m=isperfect(i);
        if(0==m)
            ;
        else
            cout << i << " ";
    }
    return 0;
}
