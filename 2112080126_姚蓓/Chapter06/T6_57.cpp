/*
 * FileName: T6_57.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 计算机辅助教学
 */
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int times()
{
    srand((unsigned)time(NULL));
    int a=(rand()%9)+1;
    int b=(rand()%9)+1;
    int n=a*b;
    cout<<"How much is "<<a<<" times "<<b<<"?"<<endl;
    return n;
}
int main()
{
    for(int i=1; ;i++)
    {
        int m=times();
        int k;cin>>k;
        if(k!=m)
        {
            cout<<"No.Please try again."<<endl;
            for(int j=1; ;j++)
            {
                cin>>k;
                if(k==m) break;
                if(k!=m)
                    cout<<"No.Please try again."<<endl;
            }
        }
        if(k==m)
            cout<<"Very good!"<<endl;


    }
    return 0;

}
