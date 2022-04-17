/*FileName:T6_53.cpp
 *Authur: Bei Yao
 *E-mail: yongganyb@163.com
 *Date: Api 9th, 2022
 *College: Henan University
 *Function:Output maximum.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;


void maximum(double &a,double b)
{
    if(a<b) a=b;
}
int main()
{
   double a,b;
   cin>>a>>b;
   maximum(a,b);
   cout<<a;


    return 0;
}


