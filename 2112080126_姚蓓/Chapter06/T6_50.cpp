/*FileName:T6_50.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 *College: Henan University
 *Function:Pass by value and pass by reference.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int tripleByValue(int a)
{
    return a*3;
}
void tripleByReference(int &number)
{
    number*=3;
}
int main()
{
    int a=2,b=3;
    cout<<" a = "<<a<<"  before tripleByValue\n";
    cout<<tripleByValue(a)<<endl;
    cout<<" a = "<<a<<"  after tripleByValue\n"<<endl;

    cout<<" b = "<<b<<"  before tripleByReference\n";
    tripleByReference(b);
    cout<<" b = "<<b<<"  after tripleByReference\n";

    return 0;
}


