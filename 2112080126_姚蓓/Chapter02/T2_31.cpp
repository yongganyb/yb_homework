/*
 * FileName: T2_31.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ÿ�տ�������
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,n;
    cout << "����ÿ�쿪����Ӣ������" << endl;
    cin >> a;
    cout << "����ÿ�������͵ļ۸�" << endl;
    cin >> b;
    cout << "����ÿ�������Ϳ��Կ���ƽ��Ӣ����" << endl;
    cin >> c;
    cout << "����ÿ�յ�ͣ���ѣ�" << endl;
    cin >> d;
    cout << "����ÿ�յ�ͬ�зѣ�" << endl;
    cin >> e;
    n=(a/c)*b+d+e;
    cout << "ÿ�տ����ķ��ã�" << n << endl;
    return 0;
}
