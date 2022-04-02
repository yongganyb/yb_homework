/*
 * FileName: T5_10.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ½×³Ë
 */
#include <iostream>

using namespace std;

int main()
{
    int m=1;
    for(int n=1;n<=5;n++)
    {
        for(int i=1;i<=n;i++)
        {
           m=m*i;
        }
        cout << m << "\t";
        m=1;
    }
    return 0;
}
