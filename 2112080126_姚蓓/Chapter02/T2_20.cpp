/*
 * FileName: T2_20.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 读入圆的半径（整数），并输出圆的直径、周长、和面积
 */
#include <iostream>

using namespace std;

int main()
{
    int r;
    cout << "输入圆的半径：";
    cin >> r;
    cout << "圆的直径为：" << 2*r <<endl;
    cout << "圆的周长为：" << 2*3.14159*r <<endl;
    cout << "圆的面积为：" << 3.14159*r*r <<endl;

    return 0;
}
