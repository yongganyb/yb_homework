/*
 * FileName: T7_31.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: Prints the string in reverse order
 */
#include <iostream>

using namespace std;

  void stringReverse (string a,int b)
  {
      if(b>0)
      {
          cout<<a[b-1];
          return stringReverse(a,--b);
      }
      else
      {
          return;
      }
  }

int main()
{
    string x;
    int y;
    getline(cin,x);
    y=x.size();
    stringReverse(x,y);
    return 0;
}
