/*
 * FileName: T4_33.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ֱ�������εı�
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "������������������" ;
    cin >> a >> b >> c;
    if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
    {
       if(a*a == b*b + c*c||b*b == a*a + c*c||c*c == a*a + b*b)
       {
           cout << "���Ա�ʾֱ�������ε�������" << endl;
       }
       else cout << "�����Ա�ʾֱ�������ε�������" << endl;
    }
     else cout << "�����Ա�ʾֱ�������ε�������" << endl;

    return 0;
}
