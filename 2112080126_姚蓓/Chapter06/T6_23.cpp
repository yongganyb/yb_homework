/*
 * FileName: T6_23.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ���������ɵķ���ͼ��
 */
#include <iostream>

using namespace std;

int main()
{
    int side;
    char fillCharacter;
    cout << "������side��" ;
    cin >> side;
    cout << "������fillCharacter��" ;
    cin >> fillCharacter;
    for(int i=1;i<=side;i++)
    {
        for(int j=0;j<=side;j++)
        {
            cout << fillCharacter;
        }
        cout << endl;
    }
    return 0;
}
