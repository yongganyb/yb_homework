/*
 * FileName: T6_26.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 摄氏温度和华氏温度
 */
#include <iostream>

using namespace std;

double celsius(double a)
{
    return 5*(a-32)/9;
}
double fahrenheit(double b)
{
    return 9*b/5+32;
}
int main()
{
    for(int i=0;i<=100;i++)
    {
        cout << i << "对应华氏温度：" << fahrenheit(i) << endl;
    }
    for(int j=32;j<=212;j++)
    {
        cout << j << "对应摄氏温度：" << celsius(j) << endl;
    }
    return 0;
}
