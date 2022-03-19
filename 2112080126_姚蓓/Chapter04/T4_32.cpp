/*
 * FileName: T4_32.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 三角形的边
 */
#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout << "输入三个非零double类型值：" ;
    cin >> a >> b >> c;
    if(a>0&&b>0&&c>0&&a+b>c&&a+c>b&&b+c>a)
    {
        cout << "可以表示三角形的三条边" << endl;
    }
    else cout << "不可以表示三角形的三条边" << endl;

    return 0;
}
