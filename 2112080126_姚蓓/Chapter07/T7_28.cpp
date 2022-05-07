/*
 * FileName: T7_28.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ╩ьнд
 */
#include <iostream>
#include <vector>
#include<string>

using namespace std;

int  testPalindrome(int h,int n,string a)
{

      if(a[h]!=a[n-1])
     {
         return 1;
     }
      if(n<=h||n<=h+1)
     {
         return 0;
     } if(a[h]==a[n-1])
     {
            return testPalindrome(++h,--n,a) ;
     }

};
int main()
{
    string str;
    int s=0,f;
    getline(cin,str);
     f=testPalindrome(s,str.size(),str);
     cout<<f;

    return 0;
}
