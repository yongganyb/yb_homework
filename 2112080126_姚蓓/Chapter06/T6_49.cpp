/*FileName:T6_49.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 *College: Henan University
 *Function:The calculation of circular area.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

inline double circleArea(double r)
{
    return r*r*3.1415926;
}
int main()
{
    double r;
    cout<<"Enter redius of a circle : ";
    cin>>r;
    cout<<"Circle 's area is : "<<circleArea(r);



    return 0;
}


