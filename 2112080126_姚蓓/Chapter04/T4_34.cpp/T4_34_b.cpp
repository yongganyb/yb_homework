/*
 * FileName: T4_34_b.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ����e
 */
#include <iostream>

using namespace std;

int main()
{
    int m,x=1,n,n1=1;
    double e=1.0;
    cout << "������Ҫ��e�ľ��ȣ�";
    cin >> n;
    while(n1<n)
    {
        m=n1;
        //����m�Ľ׳�:x
        while(m>=1)
        {
            x=x*m;
            m--;
        }//m�����0
        e=e+1.0/x;
        n1++;
    }
    cout << e << endl;
    return 0;
}
