/*
 * FileName: T4_34_c.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 估算e^x
 */
#include <iostream>

using namespace std;

int main()
{
    int m,a=1,n,n1=1,x,x1=1;
    double e=1.0;
    cout << "输入想要的e的精度：";
    cin >> n;
    cout << "输入x：" ;
    cin >> x;
    while(n1<n)
    {
        m=n1;
        //计算m的阶乘:a
        while(m>=1)
        {
            a=a*m;
            m--;
        }//m变成了0

        x1=x1*x;//x1是x的幂

        e=e+x1/a;
        n1++;
    }
    cout << e << endl;
    return 0;
}
