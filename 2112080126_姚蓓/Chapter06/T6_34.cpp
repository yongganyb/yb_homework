/*
 * FileName: T6_34.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: ²ÂÊý×ÖÓÎÏ·
 */
#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
    int n=(rand() % (1000-1+1))+ 1;
    cout << "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess." << endl;
    int x;
    cin >> x;
    while(1)
    {
        if(x==n)
        {
            cout << "Excellent!You guessed the number!\nWould you like to play again (y or n)?" << endl;
            while(1)
            {
                char a;
                cin >> a;
                if(a=='n')
                    break;
                else if(a=='y')
                {
                    int n=rand()%1000;
                    cout << "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess." << endl;
                    int x;
                    cin >> x;
                    while(1)
                    {
                        if(x==n)
                        {
                            cout << "Excellent!You guessed the number!/nWould you like to play again (y or n)?" << endl;
                            break;
                        }
                        if(x>n)
                        {
                            cout << "Too high.Try again." << endl;
                            cin >> x;
                        }
                        if(x<n)
                        {
                            cout << "Too low.Try again." << endl;
                            cin >> x;
                        }
                    }
                }
            }
            break;
        }
        if(x>n)
        {
            cout << "Too high.Try again." << endl;
            cin >> x;
        }
        if(x<n)
        {
            cout << "Too low.Try again." << endl;
            cin >> x;
        }
    }
    return 0;
}
