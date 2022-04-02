/*
 * FileName: T5_5.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 整数求和
 */
#include <iostream>

using namespace std;

int main()
{
    int i,sum=0,m;//i是继续输入值的个数，sum是用来储存总和，m是用来保护i的初值
    cin >> i;
    m=i;//m来保护i的初值
    int a[i];//定义一个数组
    for(int j=1;j<=m;j++)//循环m次，即循环i（初始值）次
    {
        cin >> a[i];
        sum=sum+a[i];
        i--;
    }
    cout << sum << endl;//输出总和

    return 0;
}
