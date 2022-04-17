/*
 * FileName: T6_36.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: µÝ¹éµÄÇóÃÝ¼ÆËã
 */
#include <iostream>

using namespace std;

int power(int base,int exponent)
{
    if(0==exponent)
        return 1;
    if(1==exponent)
        return base;
    else
        return base*power(base,exponent-1);
}
int main()
{
    cout << power(3,4) << endl;
    return 0;
}
