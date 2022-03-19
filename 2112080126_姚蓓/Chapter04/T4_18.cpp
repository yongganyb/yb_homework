/*
 * FileName: T4_18.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ±í¸ñÊä³ö
 */
#include <iostream>

using namespace std;

int main()
{
    int N=1;
    cout << "N\t" << "10*N\t" << "100*N\t" << "1000*N" << endl;
    cout << endl;
    while(N<=5)
    {
        cout << N << "\t" << 10*N << "\t" << 100*N << "\t" << 1000*N << endl;
        N++;
    }
    return 0;
}
