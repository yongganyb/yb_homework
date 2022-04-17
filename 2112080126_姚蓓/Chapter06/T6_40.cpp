/*
 * FileName: T6_40.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 递归的可视化
 */
#include <iostream>

using namespace std;

int main()
{
    int n,x;
    while(1)
    {
        cout << "n=" ;
        cin >> n;
        if(n<=0)
        {
            x=0;
            cout << "x=" << x << endl;
        }
        if(n==1||n==2)
        {
            x=1;
            cout << "x=" << x << endl;
        }
        else
        {
            cout << "x=" ;
            int a=1,b=1,c=0;
            for(int i=3; i<=n; i++)
            {
                c=a+b;
                if(i==n)
                    cout << a << "+" << b;
                a=b;
                b=c;
            }
            cout << "=" << c << endl;
        }
    }

    return 0;
}
