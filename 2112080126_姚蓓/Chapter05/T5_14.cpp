/*
 * FileName: T5_14.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ������������
 */
#include <iostream>

using namespace std;

int main()
{
    int a;
    double b,c,n=0.0,i;//aΪ��Ʒ��ţ�bΪ��������cΪ���ۣ�nΪ�����۶iΪ���ֵ
    while(0!=i)
    {
        cout << "�������Ʒ��ţ�" ;
        cin >> a;
        switch(a)
        {
            case 1:c=2.98;break;
            case 2:c=4.50;break;
            case 3:c=9.98;break;
            case 4:c=4.49;break;
            case 5:c=6.87;break;
        }
        cout << "��������������" ;
        cin >> b;
        n=n+1.0*b*c;
        cout << "������ü���ѭ����������0������������������" ;
        cin >> i;
    }
    cout << n;
    return 0;
}
