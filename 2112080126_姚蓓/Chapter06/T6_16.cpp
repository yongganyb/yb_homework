/*
 * FileName: T6_16.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 随机数
 */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    n = (rand()%(2))+1;cout << n << " ";
    n = (rand()%(100))+1;cout << n << " ";
    n = (rand()%(10))+0;cout << n << " ";
    n = (rand()%(113))+1000;cout << n << " ";
    n = (rand()%(3))-1;cout << n << " ";
    n = (rand()%(15))-3;cout << n << " ";

    return 0;
}
