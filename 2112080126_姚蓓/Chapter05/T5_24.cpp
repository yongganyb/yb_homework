/*
 * FileName: T5_24.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: �޸��Ǻ���ɵ�����ͼ��
 */
#include <iostream>

using namespace std;

int main()
{
    int i;
    int a,b;
    cout << "������1-19֮���һ��������";
    cin >> a;
    b=a/2+1;
    for(i=1;i<=a;i++)
    {
        if(i<=b)
        {
            for(int j=b-i;j>0;j--)
                cout << " ";
            for(int k=1;k<=2*i-1;k++)
                cout << "*";
            for(int j=b-i;j>0;j--)
                cout << " ";
        }
        else
        {
            for(int j=i-b;j>0;j--)
                cout << " ";
            for(int k=a;k>=2*i-a;k--)
                cout << "*";
            for(int j=i-b;j>0;j--)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
