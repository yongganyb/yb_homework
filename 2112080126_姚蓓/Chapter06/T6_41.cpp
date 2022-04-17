/*FileName:T6_41.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 *College: Henan University
 *Function:Output the greatest common divisor.
 */
#include <iostream>

using namespace std;

int gcd(int x,int y)
{
    if(0==y) return x;
    else return (y,x%y);
}

int main()
{
    int x,y,t;
    cin>>x>>y;
    if(x<y) {t=x;x=y;y=t;}
    cout << gcd(x,y) << endl;
    return 0;
}
