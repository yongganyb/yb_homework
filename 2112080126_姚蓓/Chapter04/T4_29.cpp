/*
 * FileName: T4_29.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 无限循环2的倍数
 */
#include <iostream>

using namespace std;

int main()
{
    int n=1;
    while(true)
    {
        n=n*2;
        cout << n;
    }
    return 0;
}
//最后会出现负值，然后一直是0
