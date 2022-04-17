/*
 * FileName: T6_27.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ÕÒ×îÐ¡Êý
 */
#include <iostream>

using namespace std;

double test(double a,double b,double c)
{
    int n;
    if(a>b)
        n=b;
    else
    {
        if(a>c)
            n=c;
        else
            n=a;
    }
    return n;
}
int main()
{
    double a,b,c;
    cin >> a >> b >> c;
    cout << test(a,b,c);

    return 0;
}
