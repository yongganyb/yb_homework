/*
 * FileName: T6_35.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: Api 9th, 2022
 * College: School of Computer Science and Information Engineering
 * Function: 猜数字游戏的修改
 */
#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
    int i=0;
    int n=(rand() % (1000-1+1))+ 1;
    cout << "I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess." << endl;
    int x;
    cin >> x;
    while(1)
    {
        if(x==n)
        {
            if(i<10)
                cout << "Either you know the secret or you got lucky!" << endl;
            if(10==i)
                cout << "Ahah!You know the secret!" << endl;
            if(i>10)
                cout << "You should be able to do better!" << endl;
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
                            i++;
                        }
                        if(x<n)
                        {
                            cout << "Too low.Try again." << endl;
                            cin >> x;
                            i++;
                        }
                    }
                    if(i<10)
                        cout << "Either you know the secret or you got lucky!" << endl;
                    if(10==i)
                        cout << "Ahah!You know the secret!" << endl;
                    if(i>10)
                        cout << "You should be able to do better!" << endl;
                }
            }
            break;
        }
        if(x>n)
        {
            cout << "Too high.Try again." << endl;
            cin >> x;
            i++;
        }
        if(x<n)
        {
            cout << "Too low.Try again." << endl;
            cin >> x;
            i++;
        }
    }
    return 0;
}
