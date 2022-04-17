/*
 * FileName: T6_38.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ∫∫≈µÀ˛Œ Ã‚
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <random>
#include <cmath>

using namespace std;
//µ›πÈ
void moveh(int n,int A, int B, int C)
{
    if(1==n) cout<<A<<"°˙"<<C<<endl;
    else {
        moveh(n-1,A,C,B);
        cout<<A<<"°˙"<<C<<endl;
        moveh(n-1,B,A,C);
    }
}

void hanoi(int n)
{
    if(n<=0) return;
    moveh(n,1,2,3);
}
 int main()
{
    int m;
    cin>>m;
    hanoi(m);
    return 0;

}


