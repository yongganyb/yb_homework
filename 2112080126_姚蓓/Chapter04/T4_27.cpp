/*
 * FileName: T4_27.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ��ӡ����������ʮ������
 */
#include <iostream>

using namespace std;

int main()
{
    char a;
    int b=0;
    cout << "����һ����������,���Ҫ�������밴��0��1" << endl;
    while(1)
    {
        cin >> a;
        if (a=='1')  {b=2*b+1;}
        else if(a=='0') {b=2*b;}
        else break;
    }
    cout << b << endl;
    return 0;
}
