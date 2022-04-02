/*
 * FileName: T5_6.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 整数求平均值
 */
#include <iostream>

using namespace std;

int main()
{
    int a,sum=0,n,i=0;//sum是总和，n是平均值，i是次数
    cin >> a;
    for(;9999!=a;cin >> a)//标记值9999
    {
        sum = sum + a;
        i++;
        n = sum/i;
    }
    cout << n << endl;
    return 0;
}
