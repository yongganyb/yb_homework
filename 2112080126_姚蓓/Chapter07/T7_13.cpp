/*
 * FileName: T7_13.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 利用array对象去重
 */
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array< int , 20 > a = {};
    int x ,y = 0;
    int j = 0;
    for(size_t i = 0; i < 20; i++)
    {
        cin >> x;
        for(size_t k = 0; k < 20; k++)
        {
            if(a[k] == x)
            {
                y = 0;
                break;
            }
            else
                y = 1;
        }
        if(1 == y && x>=10 && x<=100)
        {
            a[j] = x;
            j++;
        }
    }
    for(int i = 0; i < j; i++)
        cout << a[i] << " ";


    return 0;
}
