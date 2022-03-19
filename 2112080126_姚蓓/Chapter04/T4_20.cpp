/*
 * FileName: T4_20.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Mar 19th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 确定用户输入的有效性
 */
#include <iostream>

using namespace std;

int main()
{
    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int studentCounter = 1;

    while(studentCounter <= 10)
    {
        cout << "Enter result (1 = pass,2 = fail): ";
        int result = 0;
        cin >> result;
        if(result==1)
            {passes++;studentCounter++;}
        else if(result==2)
            {failures++;studentCounter++;}
        else {cout << "Enter result (1 = pass,2 = fail): ";cin >> result;}
    }
    cout << "Passed " << passes << "\nFailed " << failures << endl;
    if(passes > 8)
        cout << "Bonus to instructor!" << endl;

    return 0;
}
