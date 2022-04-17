/*
 * FileName: T6_13.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 数的整数舍入
 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    int y;
    cin >> x;
    y = floor(x+0.5) ;
    cout << x << " " << y << endl;

    return 0;
}
