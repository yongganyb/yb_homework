/*
 * FileName: T5_5.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: �������
 */
#include <iostream>

using namespace std;

int main()
{
    int i,sum=0,m;//i�Ǽ�������ֵ�ĸ�����sum�����������ܺͣ�m����������i�ĳ�ֵ
    cin >> i;
    m=i;//m������i�ĳ�ֵ
    int a[i];//����һ������
    for(int j=1;j<=m;j++)//ѭ��m�Σ���ѭ��i����ʼֵ����
    {
        cin >> a[i];
        sum=sum+a[i];
        i--;
    }
    cout << sum << endl;//����ܺ�

    return 0;
}
