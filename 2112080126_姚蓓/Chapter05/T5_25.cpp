/*
 * FileName: T5_25.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ȥ��break��continue
 */
#include <iostream>

using namespace std;

int main()
{
    unsigned int c=1,n;
    for( n = 1; n <= 10;)
    {
        cout << c << " ";
        c++;
        n++;
        if(n == 5)
            n=11;
    }

    cout << "\nBroke out of loop at c = " << c << endl;

    return 0;
}
