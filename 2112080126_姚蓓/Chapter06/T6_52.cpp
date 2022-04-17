/*FileName:T6_52.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 *College: Henan University
 *Function:Output minimum.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;


void minimum(double &a,double b)
{
    if(a>b) a=b;
}
int main()
{
   double a,b;
   cin>>a>>b;
   minimum(a,b);
   cout<<a;


    return 0;
}


