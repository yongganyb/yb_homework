/*
 * FileName: T6_31.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ���Լ��
 */
#include <iostream>

using namespace std;

int gcd(int a,int b)//���������
{
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b,b);
    if(a<b)
        return gcd(b-a,a);
}
int main()
{
    int a,b;
    cout << "����a��b��" ;
    cin >> a >> b;
    cout << "���Լ��Ϊ��";
    cout << gcd(a,b) << endl;
    return 0;
}
