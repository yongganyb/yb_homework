/*
 * FileName: T5_21.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 薪金计算
 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    double d;
    cout << "计算经理工资输入1，计算小时工工资输入2，计算佣金工工资输入3，计算计件工工资输入4：" ;
    cin >> a;
    switch(a)
    {
        case 1:
            cout << "请输入经理每周的固定工资：" ;
            cin >> b;
            cout << "经理每周的工资为：" << b << endl;
            break;
        case 2:
            cout << "请输入小时工的固定小时工资：" ;
            cin >> b;
            cout << "请输入小时工工作时间：" ;
            cin >> c;
            if(c<=40)
                d=b*c;
            else
                d=40.0*b+(c-40.0)*b*1.5;
            cout << "小时工每周的工资为：" << d << endl;
            break;
        case 3:
            cout << "请输入佣金工的销售毛利：" ;
            cin >> b;
            d=250.0+b*0.057;
            cout << "佣金工每周的工资为：" << d << endl;
            break;
        case 4:
            cout << "请输入计件工生产的产品件数：" ;
            cin >> b;
            cout << "请输入每件产品的固定金额：" ;
            cin >> c;
            d=b*c;
            cout << "计件工每周的工资为：" << d << endl;
            break;
    }

    return 0;
}
