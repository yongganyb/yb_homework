/*
 * FileName: T6_22.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: *��ɵķ���ͼ��
 */
#include <iostream>

using namespace std;

int main()
{
    int side;
    cout << "������side��" ;
    cin >> side;
    for(int i=1;i<=side;i++)
    {
        for(int j=0;j<=side;j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
