/*
 * FileName: T5_22_b.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 摩尔根定律
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,g;
    cout << "Please input a:";
    cin >> a;
    cout << "Please input b:";
    cin >> b;
    cout << "Please input g:";
    cin >> g;
    if(!(a==b)||!(g!=5))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    if(!(a==b&&g!=5))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
