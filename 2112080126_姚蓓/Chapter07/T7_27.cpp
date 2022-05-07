/*
 * FileName: T7_27.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: The Eratossian sieve
 */
#include <iostream>
#include<array>

using namespace std;

int ase(int d)
{

    for(int sd=2;sd<d/2;sd++)
    {
        if(0==d%sd)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    array<int,1000> a;
    for(int &a1:a)
    {
        a1=1;
    }


    for(int h=0;h<1000;h++)
    {
        if(0==ase(h))
        {
            a[h]=0;
        }
    }
    for(int h=2;h<1000;h++)
    {
        if(1==a[h])
        {
            for(int n=2;n*h<1000;n++)
            {
                a[n*h]=0;

            }
            cout<<h<<endl;
        }
    }


    return 0;
}
