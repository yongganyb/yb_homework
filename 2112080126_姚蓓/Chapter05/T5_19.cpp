/*
 * FileName: T5_19.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ��pi��ֵ
 */
#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=1000;i++)//ǰi��
    {
        double pi=0;
        int j,k=1,n=1;
        for(j=1;j<=i;j++)
        {
            pi=(n*4.0)/k+pi;
            n=-1.0*n;
            k=k+2;
        }
        cout << "��" << i << "�\t" << pi << endl;
    }
    return 0;
}
