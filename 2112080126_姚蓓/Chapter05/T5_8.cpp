/*
 * FileName: T5_8.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 找最小整数
 */
#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n;
    int a[n];
    cin >> a[0];
    m=a[0];
    for(int i=1;i<n;i++)
    {
        cin >> a[i];
        if(a[i]>=m) m=m;
        else m=a[i];
    }
    cout << m << endl;
    return 0;
}
