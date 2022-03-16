/*
 * FileName: T2_18.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 输入两个整数并输出较大数，如果一样大输出“These numbers are equal.”
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "输入两个整数" << endl;
    cin >> a >> b;
    if(a>b) {cout << a << " is large" <<endl;}
    else if(a==b) {cout << "These numbers are equal." << endl;}
    else {cout << b << " is large" <<endl;}

    return 0;
}
