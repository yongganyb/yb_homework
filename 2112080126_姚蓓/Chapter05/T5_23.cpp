/*
 * FileName: T5_23.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 星号组成的菱形图案
 */
#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i=1;i<=9;i++)
    {
        if(i<=5)
        {
            for(int j=5-i;j>0;j--)
                cout << " ";
            for(int k=1;k<=2*i-1;k++)
                cout << "*";
            for(int j=5-i;j>0;j--)
                cout << " ";
        }
        else
        {
            for(int j=i-5;j>0;j--)
                cout << " ";
            for(int k=9;k>=2*i-9;k--)
                cout << "*";
            for(int j=i-5;j>0;j--)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
