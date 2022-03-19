/*
 * FileName: T4_26.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 回文
 */
#include <iostream>

using namespace std;

int main()
{
    char a,b,c,d,e;
    cout << "输入一个五位数：";
    cin >> a >> b >> c >> d >> e;
    if(a==e&&b==d)
        cout << "是回文数" << endl;
    else cout << "不是回文数" << endl;
    return 0;
}
