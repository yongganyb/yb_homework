/*
 * FileName: T2_19.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 11th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ��������������������ǵĺ͡�ƽ��ֵ���˻�����Сֵ�����ֵ
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,m,n;//mΪ���ֵ��nΪ��Сֵ
    cout << "Input three different integers�� " ;
    cin >> a >> b >> c;
    cout << "Sum is " << a+b+c <<endl;
    cout << "Average is " << (a+b+c)/3 <<endl;
    cout << "Product is " << a*b*c <<endl;
    //�������������ֵ��Сֵ
    if(a>b)
    {
        if(b>c) {m=a;n=c;}
        else {
            if(a>c) {m=a;n=b;}
            else {m=c;n=b;}
        }
    }
    else
    {
        if(b<c) {m=c;n=a;}
        else {
            if(a>c) {m=b;n=c;}
            else {m=b;n=a;}
        }
    }

    cout << "Smallest is "  << n <<endl;
    cout << "Largest is " << m <<endl;



    return 0;
}
