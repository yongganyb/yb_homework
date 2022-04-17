/*
 * FileName: T6_17.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: Ëæ»úÊý
 */
#include <stdio.h>
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

#define MAX 5

int main(int argc, char* argv[])
{
    srand( (unsigned)time( NULL ) );
    int array1[MAX] = {2,4,6,8,10};
    int a = rand() % MAX;
    cout << array1[a] << endl;

    srand( (unsigned)time( NULL ) );
    int array2[MAX] = {3,5,7,9,11};
    int b = rand() % MAX;
    cout << array2[b] << endl;

    srand( (unsigned)time( NULL ) );
    int array3[MAX] = {6,10,14,18,22};
    int c = rand() % MAX;
    cout << array3[c] << endl;

    return 0;
}
