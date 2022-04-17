/*
 * FileName: T6_33.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: Å×Ó²±Ò
 */
#include <iostream>
#include <stdlib.h>

using namespace std;
bool flip()
{
    int coin=rand()%100;
    if(coin>=0&&coin<=49)
    {
        return true;
    }
    else if(coin>=50&&coin<=99)
    {
        return false;
    }
}
int main()
{
    for(int i=0;i<100;i++)
    {
        bool a=flip();
        if(a==true)
        {
            cout << "1" << " " ;
        }
        else if(a==false)
        {
            cout << "0" << " " ;
        }
    }
    return 0;
}
