/*
 * FileName: T4_32.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: �����εı�
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout << "������������double����ֵ��" ;
    cin >> a >> b >> c;
    if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
    {
        cout << "���Ա�ʾ�����ε�������" << endl;
    }
    else cout << "�����Ա�ʾ�����ε�������" << endl;

    return 0;
}
