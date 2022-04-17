/*
 * FileName: T6_20.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ±¶Êý
 */

#include <iostream>

using namespace std;

int multiple(int a,int b)
{
    if(0==b%a)
        return true;
    else
        return false;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << multiple(a,b) << endl;
    return 0;
}
