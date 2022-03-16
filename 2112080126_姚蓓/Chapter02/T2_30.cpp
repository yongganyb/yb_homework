/*
 * FileName: T2_30.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function:输入身高体重，输出BMI
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b,n,B;
    cout << "计算BMI需要您的体重和身高，如果您输入的单位是磅和英尺，请按0；如果您输入的单位是千克和米，请按1" << endl;
    cin >> n;

    cout << "请输入您的体重：" << endl;
    cin >>a;

    cout << "请输入您的身高：" << endl;
    cin >>b;

    //以下是根据输入的单位判断用哪一个计算公式
    if(0==n)
    {
        B=(a*703)/(b*b);
    }
    if(1==n)
    {
        B=a/(b*b);
    }
    cout << "您的BMI为：" << B << endl;

    //判断BMI VALUES
    if(B<18.5) {cout << "Underweight" << endl;}
    if(B>=18.5&&B<=24.9) {cout << "Normal" << endl;}
    if(B>=25&&B<=29.9) {cout << "Overweight" << endl;}
    if(B>=30) {cout << "Obese" << endl;}


    return 0;
}
