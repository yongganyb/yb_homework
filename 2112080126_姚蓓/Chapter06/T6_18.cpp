/*
 * FileName: T6_18.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: «Û√›º∆À„
 */
#include <iostream>

using namespace std;

int integerPower(int base,int exponent)
{
    int a=1;
    for(int i=0;i<exponent;i++)
    {
        a=a*base;
    }
    return a;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << integerPower(a,b) << endl;
    return 0;
}
