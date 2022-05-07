/*
 * FileName: T7_30.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: print array
 */
#include <iostream>
#include <array>

using namespace std;


void printArray(int a,int b,int *x)
{
    cout<<x[a]<<" ";
    if(b-1==a)
    {
        return;
    }
    else
    {
        return printArray(++a,b,x);
    }
}
int main()
{
   int e,h;
   cin>>e;
   int *a=new int [e];
   for(int g=0;g<e;g++)
   {
       cin>>h;

       a[g]=h;
    }
   printArray(0,e,a);
    return 0;
}
