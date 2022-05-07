/*
 * FileName: T7_14.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 利用vector对象去重
 */
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int j = 0;
    vector<int> a(j+1);
    int x ,y = 0;
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
            a.push_back(x);
            j++;
        }

    }
    for(size_t i = 0; i < a.size(); i++)
        cout << a[i] << " ";

    return 0;
}
