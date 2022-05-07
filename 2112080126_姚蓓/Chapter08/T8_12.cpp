/*
 * FileName: T8_12.cpp
 * Authur: Bei Yao
 * E-mail: yongganyb@163.com
 * Date: May 1st, 2022
 * College: School of Computer Science and Information Engineering
 * Function: The Hare and the Tortoise
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>

using namespace std;
int hare(int x,int y)
{
    if(x>=1&&x<=2)
    y=y;
    else if (x>=3&&x<=4)
        y=y+9;
    else if(5==x)
     y-=12;
    else if(x>=6&&x<=8)
    y+=1;
    else if(x>=9&&x<=10)
     y+=2;
    if(y<1)
    y=1;
    return y;
}
int tortoise(int u,int v)
{
    if(u>=1&&u<=5)
        v=v+3;
    else if(u>=6&&u<=7)
    v-=6;
    else if (u>=8&&u<=10)
    v+=1;
    if(v<1)
    {
        v=1;
    }
    return v;
}

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int a,b,c,d,m=1,n=1;
    cout<<"BANG!!!!!"<<endl;
    cout<<"AND THEY'RE OFF !!!!!"<<endl;
    while(1)
    {
        a=rand()%10+1;
        b=rand()%10+1;
        c=hare(a,m);
        d=tortoise(b,n);
        m=c;
        n=d;
        for(int z=1;z<=71;z++)
        {
            if(c==z)
            {
                cout<<"H";
            }
             if(d==z)
            {
                cout<<"T";
            }
            else
                cout<<" ";
        }
        if(c==d)
        {
            cout<<"OUCH!!!"<<endl;
        }
             if(70==c)
            {
                cout<<"It's a tie."<<endl;
                break;
            }
            if(c>=70)
            {
                cout<<"Hare wins.Yuch"<<endl;
                break;
            }
            if(d>=70)
            {
                cout<<"TORTOISE WINS !!!YAY!!!"<<endl;
                break;
            }

cout<<endl;

    }
    return 0;
}
