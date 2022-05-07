/*
 * FileName: T7_32.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: find the min in the array
 */
#include <iostream>

using namespace std;

void recursiveMinimum(int *a,int x,int y)
{
    if(x<y)
    {
       if(a[0]>a[x])
       {
           a[0]=a[x];
       }
        return recursiveMinimum(a,++x,y);
    }

    else
    {
        cout<<a[0];
        return;
    }
}

int main()
{
    int z,v;
    cin>>z;
    int*b=new int [z];
    for(int r=0;r<z;r++)
    {
        cin>>v;
        b[r]=v;
    }
    recursiveMinimum(b,0,z);
    return 0;
}
