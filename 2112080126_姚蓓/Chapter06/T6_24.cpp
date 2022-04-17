/*
 * FileName: T6_24.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: Êý×Ö·ÖÀë
 */
#include <iostream>

using namespace std;

int main()
{
    //a
    int a,b;
    cin >> a >> b;
    cout << a/b << endl;
    //b
    cout << a%b << endl;
    //c
    int x[50],c,n,i=0;
    cin >> c;
    n=c;
    while(n!=0)
    {
        x[i]=n%10;
        n=n/10;
        if(n!=0)
            i++;
        else
            break;
    }
    for(int j=i;j>=0;j--)
    {
        cout << x[j] << "  " ;
    }
    return 0;
}
