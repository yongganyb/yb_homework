/*
 * FileName: T6_14.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 数的特定小数舍入
 */
#include <iostream>
#include <cmath>

using namespace std;

double roundToInteger(double number)
{
    double y;
    y=floor(number+0.5);
    return y;
}
double roundToIenths(double number)
{
    double y;
    y=floor(number*10+0.5)/10;
    return y;
}
double roundToHundredths(double number)
{
    double y;
    y=floor(number*100+0.5)/100;
    return y;
}
double roundToThousandths(double number)
{
    double y;
    y=floor(number*1000+0.5)/1000;
    return y;
}

int main()
{
    double x;
    cin >> x;
    cout << x << " " << roundToInteger(x) << " " << roundToIenths(x) << " " << roundToHundredths(x) << " " << roundToThousandths(x) << endl;

    return 0;
}
