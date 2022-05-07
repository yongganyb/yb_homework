/*
 * FileName: T7_16.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 掷双骰
 */
#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int x,y;
    int n = 0;
    array<int,36000> sum = {};
    array<int,36000> frequency = {};
    srand(time(NULL));
    for(int i=0;i<36000;i++)
    {
        x=1+rand()%6;
        y=1+rand()%6;
        sum[n]=x+y;
        n++;
    }
    for(int sum1:sum)
        frequency[sum1]++;
    int total=0;
    for(size_t i=2;i<=12;i++)
    {
        cout << i << " : " << frequency[i] << endl;
        total+=frequency[i];
    }
    double a;
    a = frequency[7]*1.0/total*1.0;
    cout << "如果掷到7的概率：" << a << " 约等于 1/6 则合理，反之不合理" << endl;


    return 0;
}
