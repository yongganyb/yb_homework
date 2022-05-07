/*
 * FileName: T7_21.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 销售汇总
 */
#include <iostream>
#include <array>

using namespace std;

int main()
{
    const int people = 4;
    const int goods = 5;
    array<int,people> p = {};
    array<int,goods> g = {};
    int sale1;//每人每日某一产品的销售额
    array<array<int,people>,goods>sales = {};
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            cin >> sale1;
            sales[j][i] = sale1;
            p[i] += sale1;
        }
    }
    for(int j = 1; j <=5; j++)
    {
        for(int i = 1; i <=4; i++)
        {
            g[j] += sales[j][i];
        }
    }
    cout << "\t1\t2\t3\t4" << endl ;
    for(int j = 1; j <=5 ; j++)
    {
        cout << j << "\t" ;
        for(int i = 1; i <=4; i++)
        {
            cout << sales[j][i] << "\t" ;
        }
        cout << g[j];
        cout << endl;
    }
    cout << "\t" ;
    for(int i = 1; i <= 4; i++)
    {
        cout << p[i] << "\t";
    }


    return 0;
}
