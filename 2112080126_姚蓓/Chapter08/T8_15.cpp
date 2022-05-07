/*
 * FileName: T8_15.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: machine language
 */
#include <iostream>
#include<array>

using namespace std;


int main()
{
    /*const int read=10;//cin>>a;
    const int write=11;//cout<<b;
    const int load=20;//
    const int store=21;
    const int add=30;
    const int subtract=31;
    const int divide=32;
    const int multiply=33;
    const int branch=40;
    const int branching=41;
    const int branchzero=42;
    const int halt=43;*/
    int a,b=0,c,d,bank=0;
    array<int,100>memoy={0};//ÄÚ´æ

    cin>>c;
    if(c/100==10)
    {
        cin>>a;
        memoy[c%100]=a;
        b++;
        while(1)
    {
        cin>>d;
        cin>>a;
        if(a<0)
        {
            break;
        }
        b++;
        memoy[d%100]=a;


    }
    }

    while(1)
    {
        cin>>c;
        switch(c/100)
        {
        case 10:
            cin>>a;memoy[c%100]=a;break;
        case 11:
            cout<<memoy[c%100];break;
        case 20:
            bank=memoy[c%100];break;
        case 21:
            memoy[c%100]=bank;break;
        case 30:
            bank+=memoy[c%100];break;
        case 31:
            bank-=memoy[c%100];break;
        case 32:
            bank/=memoy[c%100];break;
        case 33:
             bank*=memoy[c%100];break;
        case 40:
            memoy[c%100]=bank;break;
        case 41:
            if(bank<0)
                {
                    memoy[c%100]=bank;break;
                }
        case 42:
            if(0==bank)
                {
                    memoy[c%100]=bank;break;
                }
        case 43:
            break;

        }
        if(43==c/100)  break;

    }
       while(1)
    {
        cin>>c;
        switch(c/100)
        {
        case 10:
            cin>>a;memoy[c%100]=a;break;
        case 11:
            cout<<memoy[c%100];break;
        case 20:
            bank=memoy[c%100];break;
        case 21:
            memoy[c%100]=bank;break;
        case 30:
            bank+=memoy[c%100];break;
        case 31:
            bank-=memoy[c%100];break;
        case 32:
            bank/=memoy[c%100];break;
        case 33:
             bank*=memoy[c%100];break;
        case 40:
            memoy[c%100]=bank;break;
        case 41:
            if(bank<0)
                {
                    memoy[c%100]=bank;break;
                }
        case 42:
            if(0==bank)
                {
                    memoy[c%100]=bank;break;
                }
        case 43:
            break;

        }
        if(43==c/100)  break;

    }

    return 0;
}
