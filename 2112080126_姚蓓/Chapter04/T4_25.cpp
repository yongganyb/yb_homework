/*
 * FileName: T4_25.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: �Ǻ�������
 */
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "���������εı߳��� " ;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cout << "*";
    }
    for(int m=3;m<=n;m++)
    {
        cout << "\n*";
        for(int j=3;j<=n;j++)
        {
            cout << " " ;
        }
        cout << "*";
    }
    cout << endl;
    for(int i=1;i<=n;i++)
    {
        cout << "*";
    }

    return 0;
}
