/*
 * FileName: T4_17.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 找最大数
 */
#include <iostream>

using namespace std;

int main()
{
    int counter=1,number,largest;
    cout << "counter: " << counter << endl;
    cout << "number: " ;
    cin >> number;
    largest=number;
    while(counter<10)
    {
        counter++;
        cout << "counter: " << counter << endl;
        cout << "number: " ;
        cin >> number;
        if(largest>=number) largest=largest;
        else largest=number;


    }
    cout << "largest: " << largest <<endl;
    return 0;
}
