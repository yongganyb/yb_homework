/*
 * FileName: T6_32.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: �ɼ��ļ���
 */
#include <iostream>

using namespace std;

int qualityPoints(int n)
{
    if(n>=90&&n<=100)
        return 4;
    if(n>=80&&n<=89)
        return 3;
    if(n>=70&&n<=79)
        return 2;
    if(n>=60&&n<=69)
        return 1;
    if(n<60)
        return 0;
}
int main()
{
    int n;
    cout << "������ɼ���";
    cin >> n;
    cout << "���㣺" << qualityPoints(n) << endl;
    return 0;
}
