/*
 * FileName: T2_23.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: �������������������ֵ����Сֵ
 */
#include <iostream>

using namespace std;

int main()
{
    int a[5],m,n;
    cout << "�������������";
    cin >> a[0];
    m=a[0];n=a[0];
    for(int i=1;i<5;i++)
    {
        cin >> a[i];
        if(a[i]>m) {m=a[i];}
        if(a[i]<n) {n=a[i];}
    }

    cout << "���ֵΪ��" << m <<endl;
    cout << "��СֵΪ��" << n <<endl;


    return 0;
}
