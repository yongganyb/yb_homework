/*
 * FileName: T5_22_a.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: Ħ��������
 */
#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout << "Please input x:";
    cin >> x;
    cout << "Please input y:";
    cin >> y;
    if(!(x<5)&&!(y>=7))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    if(!(x<5||y>=7))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
