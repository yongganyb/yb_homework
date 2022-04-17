/*
 * FileName: T6_25.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 秒数计算
 */
#include <iostream>

using namespace std;

int test(int a,int b,int c)
{
    int n;
    n=a*60*60+b*60+c;
    return n;
}
int main()
{
    int a,b,c;
    cout << "输入时分秒：";
    cin >> a >> b >> c;
    cout << test(a,b,c) << endl;
    return 0;
}
