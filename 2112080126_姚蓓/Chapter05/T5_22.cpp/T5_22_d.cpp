/*
 * FileName: T5_22_d.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: Ä¦¶û¸ù¶¨ÂÉ
 */
#include <iostream>

using namespace std;

int main()
{
    int i,j;
    cout << "Please input i:";
    cin >> i;
    cout << "Please input j:";
    cin >> j;
    if(!((i>4)||(j<=6)))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    if(!(i>4&&j<=6))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
    return 0;
}
