/*
 * FileName: T4_34_a.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: �׳�
 */
#include <iostream>

using namespace std;

int main()
{
    int n,x=1;
    cout << "����һ���Ǹ�������";
    cin >>n;
    while(n>=1)
    {
        x=x*n;
        n--;
    }
    cout << "n�׳�Ϊ��" << x << endl;
    return 0;
}
