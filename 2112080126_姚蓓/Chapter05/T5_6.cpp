/*
 * FileName: T5_6.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ������ƽ��ֵ
 */
#include <iostream>

using namespace std;

int main()
{
    int a,sum=0,n,i=0;//sum���ܺͣ�n��ƽ��ֵ��i�Ǵ���
    cin >> a;
    for(;9999!=a;cin >> a)//���ֵ9999
    {
        sum = sum + a;
        i++;
        n = sum/i;
    }
    cout << n << endl;
    return 0;
}
