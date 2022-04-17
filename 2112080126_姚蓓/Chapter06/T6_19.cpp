/*
 * FileName: T6_19.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 直角三角形斜边的计算
 */
#include <iostream>
#include <cmath>

using namespace std;

double hypotenuse(double a,double b)
{
    double c;
    c=pow(a*a+b*b,0.5);
    return c;
}
int main()
{
    cout << hypotenuse(3.0,4.0)<< endl;
    cout << hypotenuse(5.0,12.0)<< endl;
    cout << hypotenuse(8.0,15.0)<< endl;
    return 0;
}
