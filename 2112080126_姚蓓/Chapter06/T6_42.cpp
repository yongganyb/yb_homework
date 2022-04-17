/*FileName:T6_42.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 *College: Henan University
 *Function:Output the distance.
 */
#include <iostream>
#include <cmath>

using namespace std;

double distance(double x1,double x2,double y1,double y2)
{
    return sqrt(x1*x2+y1*y2);
}

int main()
{
    double x1,x2,y1,y2;
    cin>>x1>>x2>>y1>>y2;
    cout<< distance(x1,x2,y1,y2)<<endl;
    return 0;
}
