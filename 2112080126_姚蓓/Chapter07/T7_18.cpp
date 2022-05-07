/*
 * FileName: T7_18.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 掷双骰子游戏的改进
 */
#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{
    array<int,13>qw={0};
    srand(time(NULL));
    for(int x=0;x<1000;x++)
    {
        int a=1+rand()%6;
        int b=1+rand()%6;

        if(7==a+b||11==a+b)
        {
            ++qw[0];
            continue;
        }
        else if(2==a+b||3==a+b||12==a+b)
        {
            ++qw[1];
            continue;
        }
    }
    double x;
    x = qw[0]/1000.0;
    cout<<qw[0]<<"\t"<<qw[1]<<"\t"<<x;

    return 0;
}
