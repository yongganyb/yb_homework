/*
 * FileName: T5_20.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 26th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 毕达哥斯拉的三元组
 */
#include <iostream>

using namespace std;

int main()
{
    int side1,side2,hypotenuse;
    for(hypotenuse=1;hypotenuse<=500;hypotenuse++)
    {
        for(side1=1;side1<=500;side1++)
        {
            for(side2=1;side2<=500;side2++)
            {
                if(side1*side1+side2*side2==hypotenuse*hypotenuse)
                {
                    cout << side1 << "\t" << side2 << "\t" << hypotenuse << endl;
                }
            }
        }
    }
    return 0;
}
