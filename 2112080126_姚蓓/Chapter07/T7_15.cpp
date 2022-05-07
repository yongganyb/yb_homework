/*
 * FileName: T7_15.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 二维array对象初始化
 */
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<array<int,5>,3>sales;
    for(size_t row=0;row<sales.size();++row)
        for(size_t column=0;column<sales[row].size();++column)
            sales[row][column]=0;
    for(size_t row=0;row<sales.size();++row)
        for(size_t column=0;column<sales[row].size();++column)
        {
            cout << row*5+column+1 << " : " ;
            cout << "sales[" << row << "][" << column << "] = " << sales[row][column] << " ";
            cout << endl;
        }

    return 0;
}
