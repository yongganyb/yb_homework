/*
 * FileName: T2_27.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 输出键入的字符所对应的整数
 */
#include <iostream>

using namespace std;

int main()
{
    char a;
    cout << "输入一个字符" << endl;
    cin >> a;
    cout << static_cast< int >(a);
    return 0;
}
