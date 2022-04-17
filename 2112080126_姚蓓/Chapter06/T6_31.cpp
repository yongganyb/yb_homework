/*
 * FileName: T6_31.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 最大公约数
 */
#include <iostream>

using namespace std;

int gcd(int a,int b)//更相减损术
{
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b,b);
    if(a<b)
        return gcd(b-a,a);
}
int main()
{
    int a,b;
    cout << "输入a，b：" ;
    cin >> a >> b;
    cout << "最大公约数为：";
    cout << gcd(a,b) << endl;
    return 0;
}
