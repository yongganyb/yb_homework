/*
 * FileName: T5_21.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: н�����
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    double d;
    cout << "���㾭��������1������Сʱ����������2������Ӷ�𹤹�������3������Ƽ�����������4��" ;
    cin >> a;
    switch(a)
    {
        case 1:
            cout << "�����뾭��ÿ�ܵĹ̶����ʣ�" ;
            cin >> b;
            cout << "����ÿ�ܵĹ���Ϊ��" << b << endl;
            break;
        case 2:
            cout << "������Сʱ���Ĺ̶�Сʱ���ʣ�" ;
            cin >> b;
            cout << "������Сʱ������ʱ�䣺" ;
            cin >> c;
            if(c<=40)
                d=b*c;
            else
                d=40.0*b+(c-40.0)*b*1.5;
            cout << "Сʱ��ÿ�ܵĹ���Ϊ��" << d << endl;
            break;
        case 3:
            cout << "������Ӷ�𹤵�����ë����" ;
            cin >> b;
            d=250.0+b*0.057;
            cout << "Ӷ��ÿ�ܵĹ���Ϊ��" << d << endl;
            break;
        case 4:
            cout << "������Ƽ��������Ĳ�Ʒ������" ;
            cin >> b;
            cout << "������ÿ����Ʒ�Ĺ̶���" ;
            cin >> c;
            d=b*c;
            cout << "�Ƽ���ÿ�ܵĹ���Ϊ��" << d << endl;
            break;
    }

    return 0;
}
