/*
 * FileName: T4_13.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 汽车每加仑英里数
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a,b,a1,b1;
    double c,c1;
    a1=0;b1=0;
    while(a!=-1)
    {
       cout << "Enter miles driyen (-1 to quit): " ;
       cin >> a;
       if(a==-1) break;
       cout << "Enter gallons used: " ;
       cin >> b;
       c=1.0*a/b;
       cout << "MPG this trip: " << fixed << setprecision(6) << c << endl;
       a1=a1+a;
       b1=b1+b;
       c1=1.0*a1/b1;
       cout << "Total MPG: " << fixed << setprecision(6) << c1 << endl;
       cout << "\n" ;

    }

    return 0;
}
