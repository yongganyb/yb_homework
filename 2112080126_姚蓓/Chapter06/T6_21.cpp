/*
 * FileName: T6_21.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ż��
 */

#include <iostream>

using namespace std;

int iseven(int a)
{
    if(0==a%2)
        return true;
    else
        return false;
}
int main()
{
    int a;
    cout << "���Ҫֹͣ����������������-1" << "\n������������" ;
    cin >> a;
    cout << iseven(a) << endl;
    while(a!=-1)
    {
        cin >> a;
        cout << iseven(a) << endl;
    }

    return 0;
}
