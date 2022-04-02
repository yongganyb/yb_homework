/*
 * FileName: T5_9.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 奇整数的乘积
 */
#include <iostream>

using namespace std;

int main()
{
    int m=1;//奇数乘积
    for(int i=1;i<=15;i=i+2)
    {
        m=m*i;
    }
    cout << m << endl;
    return 0;
}
