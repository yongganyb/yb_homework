/*
 * FileName: T2_18.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ������������������ϴ��������һ���������These numbers are equal.��
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "������������" << endl;
    cin >> a >> b;
    if(a>b) {cout << a << " is large" <<endl;}
    else if(a==b) {cout << "These numbers are equal." << endl;}
    else {cout << b << " is large" <<endl;}

    return 0;
}
