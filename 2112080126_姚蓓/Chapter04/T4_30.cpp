/*
 * FileName: T4_30.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 计算圆的直径、周长和面积
 */
#include <iostream>

using namespace std;

int main()
{
    double r;
    cout << "输入圆的半径：" ;
    cin >> r;
    cout << "圆的直径为：" << 2*r << "\n圆的周长为：" << 2.0*3.14159*r << "\n圆的面积为：" << 3.14159*r*r << endl;

    return 0;
}
