/*
 * FileName: T4_19.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 找最大的两个数
 */
#include <iostream>

using namespace std;

int main()
{
    int counter=1,number,largest1,largest2;
    cout << "counter: " << counter <<endl;
    cout << "number: ";
    cin >> number;
    largest1=number;
    counter++;
    cout << "counter: " << counter <<endl;
    cout << "number: ";
    cin >> number;
    if(largest1>=number) {largest2=number;}
    else {largest2=largest1;largest1=number;}

    while(counter<10)
    {
        counter++;
        cout << "counter: " << counter <<endl;
        cout << "number: ";
        cin >> number;
        if(largest1>=number)
        {
            if(largest2>=number) ;
            else {largest2=number;}
        }
        else {largest2=largest1;largest1=number;}
    }
    cout << "最大值为：" << largest1 << "\n第二大的数为：" << largest2 << endl;
    return 0;
}
