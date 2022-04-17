/*
 * FileName: T6_30.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 数字反向
 */
#include <iostream>

using namespace std;

int test(int n)
{
    int x;
    x=n%10;
    for(;n/=10;)
    {
        x = x*10 + n%10;
    }
    return x;
}
int main()
{

    int n;
    cin >> n;
    cout << test(n) << endl;
    return 0;
}
