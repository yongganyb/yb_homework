/*
 * FileName: T2_30.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function:����������أ����BMI
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b,n,B;
    cout << "����BMI��Ҫ�������غ���ߣ����������ĵ�λ�ǰ���Ӣ�ߣ��밴0�����������ĵ�λ��ǧ�˺��ף��밴1" << endl;
    cin >> n;

    cout << "�������������أ�" << endl;
    cin >>a;

    cout << "������������ߣ�" << endl;
    cin >>b;

    //�����Ǹ�������ĵ�λ�ж�����һ�����㹫ʽ
    if(0==n)
    {
        B=(a*703)/(b*b);
    }
    if(1==n)
    {
        B=a/(b*b);
    }
    cout << "����BMIΪ��" << B << endl;

    //�ж�BMI VALUES
    if(B<18.5) {cout << "Underweight" << endl;}
    if(B>=18.5&&B<=24.9) {cout << "Normal" << endl;}
    if(B>=25&&B<=29.9) {cout << "Overweight" << endl;}
    if(B>=30) {cout << "Obese" << endl;}


    return 0;
}
