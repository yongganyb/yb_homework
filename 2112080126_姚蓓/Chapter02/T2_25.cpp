/*
 * FileName: T2_25.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: �������������������һ�����Ƿ��ǵڶ������ı���
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "��������������" << endl;
    cin >> a >> b;
    if(0==a||0==b) {cout << "��һ�������ǵڶ������ı���" << endl;}
    else
    {
        if(0==a%b) {cout << "��һ�����ǵڶ������ı���" << endl;}
        else {cout << "��һ�������ǵڶ������ı���" << endl;}
    }


    return 0;
}
