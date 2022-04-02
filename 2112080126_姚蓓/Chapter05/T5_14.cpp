/*
 * FileName: T5_14.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 计算总销售量
 */
#include <iostream>

using namespace std;

int main()
{
    int a;
    double b,c,n=0.0,i;//a为产品编号，b为销售量，c为单价，n为总零售额，i为标记值
    while(0!=i)
    {
        cout << "请输入产品编号：" ;
        cin >> a;
        switch(a)
        {
            case 1:c=2.98;break;
            case 2:c=4.50;break;
            case 3:c=9.98;break;
            case 4:c=4.49;break;
            case 5:c=6.87;break;
        }
        cout << "请输入销售量：" ;
        cin >> b;
        n=n+1.0*b*c;
        cout << "如果不用继续循环，请输入0，否则输入其它数：" ;
        cin >> i;
    }
    cout << n;
    return 0;
}
