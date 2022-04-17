/*FileName:T6_46.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 *College: Henan University
 *Function:Design some mathematical library function.
 */
#include <iostream>

using namespace std;

int ceil(double x)
{
    if(x>=0) return x+1;
    else return x;
}
double exp(int x)
{
    if(1==x) return 2.718282;
    else return 2.718282*exp(x-1);
}
double fabs(double x)
{
    if(x>=0)
        return  x;
    else return -x;
}
int floor(double x)
{
    if(x>=0) return x;
    else {
    return x-1;//这种方法如果x为整数则不适用
    }
}
double fmod(double x,double y)
{
    int a;
    a=x/y;
    return x-y*a;
}
double power(double x, double y)
{
    if(1==y) return x;
    else return x*power(x,y-1);//这种方法Y不能为小数
}
int main()
{
    double x,y;
    cin>>x>>y;
    cout<<"power=="<<power(x,y)<<endl;
    cin>>x>>y;
    cout<<"fmod=="<<fmod(x,y)<<endl;
    cin>>x;
    cout<<"floor=="<<floor(x)<<endl;
    cin>>x;
    cout<<"ceil=="<<ceil(x)<<endl;
    cin>>x;
    cout<<"exp=="<<exp(x)<<endl;
    cin>>x;
    cout<<"fabs=="<<fabs(x)<<endl;


    return 0;
}
